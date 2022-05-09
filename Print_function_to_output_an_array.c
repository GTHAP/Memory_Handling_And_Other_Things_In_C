#include <stdio.h>
#include <string.h>

void print(char P[])
{
    int i = 0;
    while(P[i] != '\0')
    {
        printf("%c", P[i]);
        i++;
    }
}

void main()
{
    char P[20] = "HELLO WORLD";
    print(P);
    printf("\n");
    printf("%s", P);
}
