FLAGS = -Wall -Werror -Wextra

all: clean gcov_report

s21_math.a:
	gcc -c $(FLAGS) s21_*.c 
	ar rc s21_math.a s21_*.o
	ranlib s21_math.a


test:	s21_math.a
	gcc -c $(FLAGS) suite_*.c
	gcc -c $(FLAGS) main.c
	gcc -lcheck -fprofile-arcs -ftest-coverage s21_*.c s21_math.a suite_*.o main.o -o tests
	./tests 

gcov_report:	test
	gcov s21_*.gcda	
	gcovr --html-details -o report.html


clean:
	rm -rf *.o *.a *.gcno  *.gcda *.gcov *.css *.html
	rm -rf tests

