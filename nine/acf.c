//
// Created by zyw on 2020/12/31.
//
#include <stdio.h>
#define SIZE 5
void show_array(const double ar[], int n);
void multi_array(double ar[], int n, double multi);

int main()
{
    double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};
    printf("The original dip array:\n");
    show_array(dip, SIZE);
    multi_array(dip, SIZE, 2.5);
    printf("The dip array after calling multi_array():\n");
    show_array(dip, SIZE);
    return 0;
}

void show_array(const double *ar, int size)
{
    for (int i = 0; i < size; ++i) {
        printf("%.3f ", *(ar+i));
    }
    putchar('\n');
}

void multi_array(double *ar, int size, double multi)
{
    int i;
    for (int j = 0; j < size; ++j) {
        *(ar++) *= multi;
    }
}
