#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "linear_sort.h"
#include "check_sort.h"
#include "print_arr.h"
#include "arr_generate.h"

int main(void) {
	int len, min, max;
	double timer = 0;
	int* arr = NULL;
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

	arr = (int*)malloc(len * sizeof(int));
	arr_generate(arr, len);

	min = arr[0], max = arr[0];
	for (int i = 0; i < len; i++) {
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}
	
	printf("\nArray before sorting:\n");
	print_arr(arr, len);

	timer -= clock();
	linear_sort(arr, len, min, max);
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