//
// Created by 张耀文 on 2020/11/26.
//

#include<stdio.h>

int main()
{
    printf("int size %zd bytes\n", sizeof(int));
    printf("char size %zd bytes\n", sizeof(char));
    printf("long size %zd bytes\n", sizeof(long));
    printf("long long size %zd bytes\n", sizeof(long long));
    printf("double size %zd bytes\n", sizeof(double));
    printf("long double size %zd bytes\n", sizeof(long double));
    return 0;
}