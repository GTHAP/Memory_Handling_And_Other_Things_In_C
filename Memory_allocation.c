#include<stdio.h>
#include<stdlib.h>

void main()
{
    int * ptr = malloc(10 * sizeof(int));
    for(int i = 0; i < 10; ++i)
    {
        ptr[i] = i + 1;
    }
    for(int i = 0; i < 10; ++i)
    {
        printf("%d ", ptr[i]);
    }
    free (ptr);
}