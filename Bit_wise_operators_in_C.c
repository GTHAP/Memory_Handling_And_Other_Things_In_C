#include<stdio.h>

void main()
{
    char a = 1;
    char b = a;
    if (a & b)
    {
        printf("a & b is 1");
    }
    printf("\n");
    if (a && b)
    {
        printf("a && b are 1");
    }
}
