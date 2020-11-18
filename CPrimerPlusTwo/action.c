//
// Created by 张耀文 on 2020/11/18.
//

#include <stdio.h>

void useCharPointPrintf();
void printLiveDays();
void printName();

int main()
{
    useCharPointPrintf();
    printLiveDays();
    printName();
}

void useCharPointPrintf()
{
    char* firstname;
    char* lastName;
    firstname = "dainel";
    lastName = "zhang";

    printf("%s %s\n", firstname, lastName);
    printf("%s\n%s\n", firstname, lastName);
    printf("%s %s\n", firstname, lastName);
}

void printLiveDays(int age)
{
    printf("your live %d days\n", age * 365);
}

void printName()
{
    printf("name: %s, address: %s", "dainel.zhang", "chengdu");
}