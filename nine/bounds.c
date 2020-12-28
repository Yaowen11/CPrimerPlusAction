//
// Created by 张耀文 on 2020/12/27.
//
#include <stdio.h>
#define  SIZE 4
int main(void)
{
    int value = 44;
    int arr[SIZE];
    int value1 = 88;
    int i;
    printf("value = %d, value1 = %d\n", value, value1);
    for (i = 0; i < SIZE; ++i) {
        arr[i] = 2 * i + 1;
    }
    for (i = 0; i < SIZE+2; ++i) {
        printf("%2d %d\n", i, arr[i]);
    }
    printf("value = %d, value1 = %d\n", value, value1);
    printf("address of arr[0]: %p\n", &arr[0]);
    printf("address of arr[4]: %p\n", &arr[4]);
    printf("address of value: %p\n", &value);
    printf("address of value1: %p\n", &value1);
}
