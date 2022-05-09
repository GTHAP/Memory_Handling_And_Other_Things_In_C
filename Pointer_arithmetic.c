#include <stdio.h>

void main()
{
    int A[5] = { 20, 100, 900, 79, 33 };
    int *P = A;
    printf("%p\n", A); 
    printf("%p\n", P);
    printf("%d\n", *P);
    printf("%d\n", *(P + 4)); // this will print out the fifth value in the array 
    
    *P = *P + 2; // this means we are dereferencing the pointer variable P and adding 2 to it
    printf("%d\n", *P); // the output will be 22 since the first value in the array is 20 and we added 2 to it
    printf("%p", P);
}
