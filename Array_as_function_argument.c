#include <stdio.h>

int sum(int A[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += A[i];
    }
    return sum;
}

void main()
{
    int total = 0;
    int A[5] = { 1, 2, 3, 4, 5 };
    int size = sizeof(A)/sizeof(int);
    total = sum(A, size);
    printf("%d\n", total);
}
