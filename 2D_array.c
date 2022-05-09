#include <stdio.h>

void main()
{
    int A[2][4]; // this means there are two arrays - A[0] and A[1]
    int size = sizeof(int);
    printf("%d\n", size);
    printf("%p\n", A[0]);
    printf("%p\n", A[1]);
}
