// C pointers

#include<stdio.h>
void main()
{
    int a;
    int *p;
    p = &a;
    a = 55;
    printf("%d\n", a); // value of a
    printf("%p\n", p); // value of p i.e. the address of integer a
    printf("%d\n", *p); // dereferencing the pointer variable p which would give us the value of the integer a
    printf("%p\n", &a); // memory address of a (same as the value for p)
    printf("%p\n", &p); // memory address of pointer variable p
    *p = 8;
    printf("%d\n", a); // new value of a because we dereferenced and updated the value of pointer p
    printf("%d\n", *p); // new value of pointer p (same as value of a)
    printf("%p\n", p); // memory address of p
}
