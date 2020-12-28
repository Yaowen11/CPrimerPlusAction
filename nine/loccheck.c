//
// Created by 张耀文 on 2020/12/26.
//
#include <stdio.h>
void mikado(int);

int main(void)
{
    int pooh = 2, bah = 5;
    printf("In main(), pool = %d and &pooh = %p\n", pooh, &pooh);
    printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
    mikado(pooh);
    return 0;
}

void mikado(int bah)
{
    int pool = 10;
    printf("In mikado(), pool = %d and &pooh = %p\n", pool, &pool);
    printf("In mikado(), bah = %d and &bah = %p\n", bah, &bah);
}