#include<stdio.h>
#include<stdlib.h>

int add(int *a, int *b)
{
    *a = *a + 1;
    printf("%d\n", *a);
    *b = *b + 1;
    printf("%d\n", *b);
    int c = (*a) + (*b);
    return c;
}

void main()
{
    int a = 1000, b = 999;
    int c = add(&a, &b);
    printf("%d", c);
}
