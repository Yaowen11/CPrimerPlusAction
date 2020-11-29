//
// Created by 张耀文 on 2020/11/25.
//

#include <stdio.h>
#include <inttypes.h>

int main()
{
    int32_t me32 = 45933945;
    printf("me32 = %d\n", me32);
    printf("me32 = %" PRId32 "\n", me32);
    printf("me32 = %" "d" "\n", me32);
}