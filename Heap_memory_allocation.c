#include<stdio.h>
#include<stdlib.h>

void main()
{
    int * ptr = malloc(sizeof(int)); // allocating dynamic/heap memory for integer pointer variable ptr (4 bytes)
    *ptr = 101; // assigning a value to ptr that will be stored in the dynamic/heap memory
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    free (ptr); // deleting the allocated memory (very important)
    char * initial = malloc(sizeof(char)); // allocating dynamic/heap memory for character pointer variable initial (1 byte)
    initial[0] = 'G'; // assigning a value to initial that will be stored in the dynamic/heap memory
    printf("%p\n", initial);
    printf("%c\n", initial[0]);
    free (initial); // deleting the allocated memory (very important)
}
