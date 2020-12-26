//
// Created by 张耀文 on 2020/12/1.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    printf("enter you name: ");
    scanf("%s", name);
    printf("your name is: , \"%s\"\n", name);
    printf("20 weight right print: \"%s.20\"\n", name);
    printf("\".20%s\" print in left\n", name);
    short length = strlen(name);
    printf("beyond 3 char to print: %s.%d", name, length + 3);
}