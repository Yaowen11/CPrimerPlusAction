//
// Created by 张耀文 on 2020/12/1.
//

#include <stdio.h>

int main()
{
    printf("enter you name: ");
    char name[40];
    int width;
    printf("please input your name:");
    scanf("%s", name);
    width = printf("\"%s\"\n", name);
    width -= 4;
    printf("\"%20s\".\n", name);
    printf("\"%-20s\".\n", name);
    printf("\"%*s\".", (width + 3), name);
}