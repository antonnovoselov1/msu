all: task6.o merge_sort.o merge.o print_arr.o arr_generate.o check_sort.o
	gcc task6.o merge_sort.o merge.o print_arr.o arr_generate.o check_sort.o && ./a.out && rm *.o && rm *.out
task6.o: task6.c
	gcc -c task6.c
merge_sort.o: merge_sort.c
	gcc -c merge_sort.c
merge.o: merge.c
	gcc -c merge.c
print_arr.o: print_arr.c
	gcc -c print_arr.c
arr_generate.o: arr_generate.c
	gcc -c arr_generate.c
check_sort.o: check_sort.c
	gcc -c check_sort.c
