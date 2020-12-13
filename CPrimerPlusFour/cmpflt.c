//
// Created by 张耀文 on 2020/12/9.
//

#include <math.h>
#include <stdio.h>

int main()
{
    const double ANSWER = 3.14159;
    double response;
    printf("What is the value of pi?\n");
    scanf("%1lf", &response);
    while (fabs(response - ANSWER) > 0.0001) {
        printf("Try again\n");
        scanf("%1lf", &response);
    }
    printf("close enough!\n");
    return 0;
}
