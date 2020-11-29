//
// Created by 张耀文 on 2020/11/25.
//

#include <stdio.h>

int main(void)
{
    int x = 100;
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d, octal = %#o; hex = %#x\n", x, x, x);
    int i = 2147483647;
    unsigned int j = 4294967295;
    printf("%d %d %d\n", i, i + 1, i + 2);
    printf("%u %u %u\n", j, j + 1, j +2);
    printf("Hello!\007\n");
    return 0;

}