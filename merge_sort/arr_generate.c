#include "arr_generate.h"

void arr_generate(double* arr, int len) {
	double value;
	srand(time(NULL));
	for (int i = 0; i < len; i++) {
		value = rand() / 970000.;
		arr[i] = value;
	}
}
