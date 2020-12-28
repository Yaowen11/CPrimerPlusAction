//
// Created by 张耀文 on 2020/12/28.
//

#include <stdio.h>

int arr_sum(int*, int);
int ints_sum(int[], int);
int sump(int * start , int * end);

#define SIZE 9
int main()
{
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = arr_sum(arr, SIZE);
    int int_sum = ints_sum(arr, SIZE);
    int int_sump = sump(arr, arr + SIZE);
    printf("int array sum: %d %d %d\n", sum, int_sum, int_sump);
    return 0;
}

int sump(int * start, int * end)
{
    int total = 0;
    while (start < end) {
        total += *start++;
    }
    return total;
}

int arr_sum(int* ints, int length)
{
    int total = 0;
    for (int i = 0; i < length; ++i) {
        total += *(ints + i);
    }
    return total;
}

int ints_sum(int ints[], int length)
{
    int total = 0;
    for (int i = 0; i < length; ++i) {
        total += ints[i];
    }
    return total;
}