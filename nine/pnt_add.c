//
// Created by 张耀文 on 2020/12/28.
//
#include <stdio.h>
#define SIZE 4

int main()
{
    short dates[SIZE];
    short * pti;
    short index;
    double bills[SIZE];
    double * ptf;
    pti = dates;
    ptf = bills;
    printf("%23s %15s %15s %15s\n", "short", "shortArrAddr", "double", "doubleArrAddr");
    for (index  = 0; index < SIZE; index++) {
        printf("pointers + %d: %10p %10p %10p %10p\n", index, &dates[index], pti + index, ptf + index,  &bills[index]);
    }
}
