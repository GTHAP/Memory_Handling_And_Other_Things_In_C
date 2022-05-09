#include <stdio.h>
void main()
{
    int A[5] = { 5, 4, 3, 2, 1 }; // the index of the integer 5 will be 0 (array indexes always start from 0)
    printf("%p\n", A); // the memory address of the array A
    printf("%p\n", &A); // this will also print the memory address of array A
    printf("%d\n", A[0]); // the value stored at index A[0]
    printf("%p\n", &A[0]); // the memory address of the value stored at A[0] (will be same as the address of A)
    printf("%d\n", A[4]); // the value stored at index A[4]
    
    printf("\n\n");
    
    int B[5] = { 10, 9, 8, 7, 6 };
    for(int i = 0; i <= 5; i++)
    {
        printf("%p\n", &B[i]);
        printf("%d\n", B[i]);
    }
}
