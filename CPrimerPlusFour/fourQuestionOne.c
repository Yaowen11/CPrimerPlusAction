//
// Created by 张耀文 on 2020/12/1.
//

#include <stdio.h>

int main()
{
    char firstName[20];
    char lastName[20];
    printf("enter you first name: ");
    scanf("%s", firstName);
    printf("enter you last name: ");
    scanf("%s", lastName);
    printf("your name is %s,%s\n", lastName, firstName);
}