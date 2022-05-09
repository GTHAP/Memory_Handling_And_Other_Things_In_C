#include <stdio.h>
#include <string.h>

void print(char *P) // declaring a character pointer instead of an array here 
{                   // the character pointer will point to the memory address of the first value in the array - P
    while(*P != '\0')
    {
        printf("%c", *P);
        P++;
    }
}

void main()
{
    char P[40] = "Godzilla is the king of the monsters";
    print(P); 
}
