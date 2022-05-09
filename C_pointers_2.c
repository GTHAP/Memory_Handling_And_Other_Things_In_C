#include <stdio.h>
void main()
{
    int a = 101;
    int *p = &a;
    printf("%d\n", a); // value of a
    printf("%p\n", &a); // memory address of a
    printf("%p\n", p); // value of p i.e. the memory address of a
    printf("%d\n", *p); // the value of p after dereferencing p (same as the value stored in a)
    printf("%p\n", p + 1); // incrementing the memory address by one (it will be incremented by 4 bytes)
    printf("%d\n", *p + 1); // incrementing the dereferenced value of p by one i.e. 101 + 1 = 102
}
