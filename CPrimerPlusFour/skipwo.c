//
// Created by 张耀文 on 2020/12/1.
//

#include <stdio.h>

int main()
{
    int n;
    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);
    printf("The last integer wa %d\n", n);
}