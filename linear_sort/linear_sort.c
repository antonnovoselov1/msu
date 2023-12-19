#include "linear_sort.h"

void linear_sort(int* arr, int len, int min, int max) {
	int k = 0;
	int* count = NULL;
	count = (int*)malloc(max * sizeof(int));


	for (int i = min; i <= max; i++) {
		count[i] = 0;
	}

	for (int i = 0; i < len; i++) {
		count[arr[i]] += 1;
	}

	for (int i = min; i <= max; i++) {
		while (count[i] > 0) {
			arr[k] = i;
			k++;
			count[i]--;
		}
	}
}