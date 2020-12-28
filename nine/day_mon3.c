//
// Created by 张耀文 on 2020/12/28.
//
#include <stdio.h>
#define MONTHS 12

int main()
{
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 30, 31};
    int index;
    for (index = 0; index < MONTHS; index++) {
        printf("Month %2d has %d days. %d days\n", index + 1, *(days + index), *(&days[index]));
    }
}
