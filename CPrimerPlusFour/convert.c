//
// Created by 张耀文 on 2020/12/5.
//

#include <stdio.h>

int main()
{
    char ch;
    int i;
    float f;

    f = i = ch = 'C';
    printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f);
    ch = ch + 1;
    i = f + 2 * ch;
    f = 2.0 * ch + i;
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, f);
    printf("Now ch = %c\n", ch);
    ch = 80.89;
    printf("Now ch = %c\n", ch);
    ch = 1107;
    printf("Now ch = %c\n", ch);
}