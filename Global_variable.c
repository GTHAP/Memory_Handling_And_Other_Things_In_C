#include<stdio.h>

int var = 99;

void printvar()
{
printf("%d\n", var);
}

void main()
{
    int a = 101;
    int b = 201;
    int c = a + b;
    printf("%d\n", c);
    printvar();
    int d = c / var;
    printf("%d\n", d);
}
