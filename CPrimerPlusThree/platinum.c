//
// Created by zyw on 2020/11/21.
//

#include <stdio.h>

int main(void)
{
    float weight;
    float value;
    printf("Are you worth your weight in platnum?\n");
    printf("Lest's check it out.\n");
    printf("Please enter your weight in pounds");
    scanf("%f", &weight);
    value = 1700.0 * weight * 14.5833;
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("Your are easily worth that! If platinum prices drop, \n");
    printf("eat more to maintain your value.\n");
    return 0;
}