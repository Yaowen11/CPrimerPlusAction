//
// Created by zyw on 2021/1/1.
//

#include <stdio.h>
void arr();
void pointer();

int main()
{
    arr();
    pointer();
}

void arr()
{
    int zip[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};
    printf(" *zip = %p, zip + 1 = %p\n", zip, zip + 1);
    printf("zip[0] = %p, zip[0] + 1 = %p\n", zip[0], zip[0] + 1);
    printf("*zip = %p, *zip + 1 = %p\n", *zip, *zip + 1);
    printf("zip[0][0] = %d\n", zip[0][0]);
    printf("*zip[0] = %d\n", *zip[0]);
    printf("**zip = %d\n", **zip);
    printf("zip[2][1] = %d\n", zip[2][1]);
    printf("*(*(zip+2)+1)=%d\n", *(*(zip + 2) + 1));
    printf("**zip=%p, &zip[0][0]=%p, **zip=%d, zip[0][0] = %d\n", &(**zip), &zip[0][0], **zip, zip[0][0]);
}

void pointer()
{
    int zip[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};
    int (*pz)[2];
    pz = zip;
    printf("* pz = %p, pz + 1 = %p\n", pz, pz + 1);
    printf("pz[0] = %p, pz[0] + 1 = %p\n", pz[0], pz[0] + 1);
    printf("*pz = %p, *pz + 1 = %p\n", *pz, *pz + 1);
    printf("pz[0][0] = %d\n", pz[0][0]);
    printf("*pz[0] = %d\n", *pz[0]);
    printf("**pz = %d\n", **pz);
    printf("pz[2][1] = %d\n", pz[2][1]);
    printf("*(*(pz+2)+1=%d\n", *(*(pz+2) + 1));
}