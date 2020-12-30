//
// Created by 张耀文 on 2020/12/30.
//
#include <stdio.h>

static int urn[5] = {100, 200, 300, 400, 500};

void pointer_add_int();
void pointer_sub_int();
void pointer_increment();
void pointer_decrement();
void pointer_sub_pointer();

int main(void)
{
    pointer_add_int();
    pointer_sub_int();
    pointer_increment();
    pointer_decrement();
    pointer_sub_pointer();
    return 0;
}

void pointer_add_int()
{
    int * ptr1, * ptr2, * ptr3;
    ptr1 = urn;
    ptr2 = &urn[2];
    printf("pointer value, dereferenced pointer, pointer address:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
    ptr3 = ptr1 + 4;
    printf("adding an int to a pointer:\n");
    printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n\n", ptr1 + 4, *(ptr1 + 4));
}

void pointer_sub_int()
{
    int * ptr3 = &urn[4];
    printf("pointer value, dereferenced pointer, pointer address:\n");
    printf("subtracting an int from a pointer:\n");
    printf("ptr3 = %p, *(ptr3 - 2) = %d, ptr3 - 2 = %p\n\n", ptr3, *(ptr3 - 2), ptr3 - 2);
}

void pointer_increment()
{
    int * ptr1;
    ptr1 = urn;
    printf("pointer value, dereferenced pointer, pointer address:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
    ptr1++;
    printf("values after ptr1++:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n\n", ptr1, *ptr1, &ptr1);
}

void pointer_decrement()
{
    int * ptr2;
    ptr2 = &urn[2];
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
    ptr2--;
    printf("values after --ptr2:\n");
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n\n", ptr2, *ptr2, &ptr2);
}

void pointer_sub_pointer()
{
    int * ptr1, * ptr2;
    ptr1 = urn;
    ptr2 = &urn[2];
    printf("pointer value, dereferenced pointer, pointer address:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
    printf("subtracting one pointer from another:\n");
    printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n\n", ptr2, ptr1, ptr2 - ptr1);
}