// Call by reference

#include <stdio.h>

void increment(int *a)
{
    *a = *a + 1;
}

int main()
{
    int x = 111;
    increment(&x);
    printf("%d", x);
}
