#include "check_sort.h"

int check_sort(double* arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		if (arr[i] > arr[i + 1]) return 0;
	}
	return 1;
}