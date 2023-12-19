#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "merge_sort.h"
#include "check_sort.h"
#include "print_arr.h"
#include "arr_generate.h"

int main(void) {
	int len;
	double timer = 0;
	double* arr = NULL;
	printf("Enter the array length: ");
	scanf("%d", &len);

	if (len < 0) {
		printf("error: negative length\n");
		return -1;
	}
	else if (len == 0) {
		printf("error: zero length\n");
		return -1;
	}

	arr = (double*)malloc(len * sizeof(double));
	arr_generate(arr, len);

	printf("\nArray before sorting:\n");
	print_arr(arr, len);

	timer -= clock();
	merge_sort(arr, 0, len - 1);
	timer += clock();

	if (check_sort(arr, len)) {
		printf("\nSorted arrray:\n");
		print_arr(arr, len);
		printf("Required time for sorting %d elements is %lf seconds\n", len, (double)timer / CLOCKS_PER_SEC);
	}
	else printf("Array isn't sorted\n");

	free(arr);
	return 0;
}