//
// Created by 张耀文 on 2020/11/26.
//
#include<stdio.h>
int main()
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;
    printf("%f can be written %e\n", aboat, aboat);
    printf("and it's %a in hexadecimal, powers of 2 notation\n", aboat);
    printf("%LF can be written %LE\n", dip, dip);
    float toobig = 3.4E38 * 100.0f;
    printf("%e\n", toobig);
    return 0;
}