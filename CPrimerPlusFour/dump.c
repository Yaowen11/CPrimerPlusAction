//
// Created by 张耀文 on 2020/12/2.
//
#include <stdio.h>
#include <string.h>

void begin();
int main()
{
    begin();
    int number = 2345;
    printf("enter a number:");
//    scanf("%d", &number);
    printf("print %d %#4X\n", number, number);
    char str[30];
    printf("enter a str:");
    scanf("%s", str);
    printf("%-30s\n", str);
    float a = 2.33e+002;
    printf("%12.3f", a);
    printf("He sold the painting for $%2.2f.\n", 2.345e2);
    printf("%c%c%c\n", 'H', 105, '\41');
#define Q "His Hamlet was funny without being vulgar."
    printf("%s\nhas %lu character.\n", Q, strlen(Q));
    printf("ls %2.2e the same as %2.2f?\n", 1201.0, 1201.0);
}

#define B booboo
#define X 10

void error()
{
    int age;
    char name[20];
    printf("Please enter your first name.");
    scanf("%s", name);
    printf("All right, %s, what's your age?\n", name);
    scanf("%d", &age);
    int xp = 0;
    int x = 0;
    xp = age + x;
    printf("That's a %s! You must be at least %d.\n", name, xp);
}

#define Book "War and Peace"

void begin()
{
    float cost = 12.99;
    float percent = 80.0;
    printf("This copy of \"%s\" sells for $%.2f.\nThat is %.f%% of list.\n", Book, cost, percent);
}

void six()
{

}