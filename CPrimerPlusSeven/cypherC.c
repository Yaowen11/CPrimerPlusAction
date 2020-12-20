//
// Created by 张耀文 on 2020/12/14.
//
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            putchar(ch + 1);
        } else {
            putchar(ch);
        }
    }
    putchar(ch);
}
