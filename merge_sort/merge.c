#include "merge.h"

void merge(double* arr, int left, int middle, int right)
{
    int i, j, k;
    int left_ind = middle - left + 1;
    int right_ind = right - middle;
    double* left_temp_arr = NULL;
    double* right_temp_arr = NULL;

    left_temp_arr = (double*)malloc(left_ind * sizeof(double));
    right_temp_arr = (double*)malloc(right_ind * sizeof(double));

    for (i = 0; i < left_ind; i++)
        left_temp_arr[i] = arr[left + i];
    for (j = 0; j < right_ind; j++)
        right_temp_arr[j] = arr[middle + 1 + j];

    i = 0, j = 0;
    k = left;

    while (i < left_ind && j < right_ind) {
        if (left_temp_arr[i] <= right_temp_arr[j]) {
            arr[k] = left_temp_arr[i];
            i++;
        }
        else {
            arr[k] = right_temp_arr[j];
            j++;
        }
        k++;
    }

    while (i < left_ind) {
        arr[k] = left_temp_arr[i];
        i++;
        k++;
    }

    while (j < right_ind) {
        arr[k] = right_temp_arr[j];
        j++;
        k++;
    }
}