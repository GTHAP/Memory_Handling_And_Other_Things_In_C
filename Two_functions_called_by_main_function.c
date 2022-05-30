#include<stdio.h>
#include<stdlib.h>

void print()
{
    printf("PRINT TEXT HERE");
}

int add(int *a, int *b)
{
    int c = (*a) + (*b);
    return c;
}

void main()
{
    int a = 1000, b = 999;
    int c = add(&a, &b);
    print(); // This may cause issues in some compilers. As the memory allocated for the add function is cleared and allocated for the print function.
             // For example, this worked fine in onlinegdb. 
             // Use dynamic/heap memory allocation in such a scenario.
    printf(" %d", c);
}
