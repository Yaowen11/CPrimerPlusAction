//
// Created by 张耀文 on 2020/11/30.
//
#include <stdio.h>

int main()
{
    int age;
    float assets;
    char pet[30];
    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);
    scanf("%s", pet);
    printf("%d $%.2f %s\n", age, assets, pet);
}
