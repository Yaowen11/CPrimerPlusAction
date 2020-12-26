//
// Created by 张耀文 on 2020/12/20.
//
#include <stdio.h>

void display(char cr, int lines, int width);

int main()
{
    int ch;
    int rows, cols;
    printf("Enter a character and two in tegers:\n");
    while ((ch = getchar()) != '\n') {
        if (scanf("%d %d", &rows, &cols) != 2) {
            break;
        }
        display(ch, rows, cols);
        printf("Enter another character and two integers;\n");
        printf("Enter a newline to quit.\n");
    }
    printf("Bye.\n");
}

void display(char cr, int lines, int width)
{
    int row, col;
    for (row = 1; row <= lines; row++) {
        for (col = 1; col <= width; col++) {
            putchar(cr);
        }
        putchar('\n');
    }
}