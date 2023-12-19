#include "arr_generate.h"

void arr_generate(int* arr, int len) {
	int value;
	srand(time(NULL));
	for (int i = 0; i < len; i++) {
		value = rand();
		arr[i] = value;
	}
}