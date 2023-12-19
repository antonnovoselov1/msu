all: task8.o linear_sort.o print_arr.o arr_generate.o check_sort.o
	gcc task8.o linear_sort.o print_arr.o arr_generate.o check_sort.o && ./a.out && rm *.o && rm *.out
task8.o: task8.c
	gcc -c task8.c
linear_sort.o: linear_sort.c
	gcc -c linear_sort.c
print_arr.o: print_arr.c
	gcc -c print_arr.c
arr_generate.o: arr_generate.c
	gcc -c arr_generate.c
check_sort.o: check_sort.c
	gcc -c check_sort.c
