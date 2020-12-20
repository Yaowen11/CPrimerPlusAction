//
// Created by 张耀文 on 2020/12/20.
//

#include <stdio.h>

int main()
{
    printf("enter a word: ");
    int ch;
    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }
    printf("your enter a eof char!\n");
    return 0;
}
