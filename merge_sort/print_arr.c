#include "print_arr.h"

void print_arr(double* arr, int len)
{
	for (int i = 0; i < len; i++) printf("%lf ", arr[i]);
    printf("\n");
}
