//
// Created by zyw on 2020/11/27.
//

#include <stdio.h>
#include <string.h>
#define DENSITY 62.4

int main()
{
    float weight, volume;
    int size, letters;
    char name[40];
    printf("Hi! what's your first name?\n");
    // 使用数组直接接受，不用取其地址？
    scanf("%s", name);
    printf("%s, what's your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also, your first name has %d letters, \n", letters);
    printf("and we have %d bytes to store it.\n", size);
    return 0;
}