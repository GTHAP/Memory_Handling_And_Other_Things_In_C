#include <stdio.h>

void main()
{
    int a = 1989;
    int *ptr = &a;
    printf("%d\n", a);
    printf("%p\n", &a);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
}
