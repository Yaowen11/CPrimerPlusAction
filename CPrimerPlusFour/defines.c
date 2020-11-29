//
// Created by 张耀文 on 2020/11/29.
//

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("int max: %d, int min: %d, ll min %lld, ll max %lld\n", INT_MAX, INT_MIN, LLONG_MIN, LLONG_MAX);
    printf("float precision = %d digits, float epsilon = %e\n", FLT_DIG, FLT_EPSILON);
}