//
// Created by 张耀文 on 2020/11/30.
//

#include <stdio.h>
#define PAGES 336
#define WORDS 65618

int main()
{
    short num = PAGES;
    short mnum = -PAGES;
    printf("num as short and unsigned short: %hd %hu\n", num, num);
    printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
    printf("num as int and char: %d %c\n", num, num);
    printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);
    short b = -336;
    printf("b: -336 format signed short: %hd; unsigned short: %hu\n", b, b);
    unsigned short a = 65200;
    printf("a:65200 format signed short: %hd; unsigned short: %hu\n", a, a);

}



