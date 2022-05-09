#include <stdio.h>
void main()
{
    int a = 999; // integer a with value 999
    int *b = &a; // pointer variable b with the address of a as the value
    int **c = &b; // pointer to pointer variable c with the address of b 
    int ***d = &c; // pointer to pointer to pointer variable d with the address of c
    printf("%d\n", a);
    printf("%p\n", &a);
    printf("%p\n", b);
    printf("%p\n", c);
    printf("%p\n", d); 
    printf("%p\n", *d); 
    printf("%p\n", **d);
    printf("%d\n", ***d);
    ***d += 1;
    printf("%d\n", ***d);
}
