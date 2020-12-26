//
// Created by 张耀文 on 2020/12/10.
//

#include <stdio.h>
#include "five.h"

void one();
void two(int const count, char const ch);
void three(char ch, int const length);
void four(char ch, int const count);
void five(char const ch);

int main()
{
    one();
    two(5, '$');
    three('F', 6);
    four('A', 6);
    five('E');
}

void one()
{
    char alo[26];
    char begin = 'a';
    for (int i = 0; i < 26; i++) {
        alo[i] = begin++;
    }
    printf("alo: %s\n", alo);
}

void two(int const count, char const ch)
{
    for (int i = 0; i < count; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%c", ch);
        }
        printf("\n");
    }
}

void three(char ch, int const length)
{
    char tmp = ch;
    for (int i = 0; i < length; ++i) {
        int j = 0;
        while (j <= i) {
            printf("%c", tmp--);
            j++;
        }
        tmp = ch;
        printf("\n");
    }
}

void four(char ch, int const length)
{
    for (int i = 0; i < length; ++i) {
        int j = 0;
        while (j <= i) {
            printf("%c", ch++);
            j++;
        }
        printf("\n");
    }
}