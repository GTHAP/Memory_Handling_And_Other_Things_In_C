#include<stdio.h>

void New_Func(char S[])
{
    printf("%s", S);
}

void main()
{
    char New_String[] = "There is a killer on the loose";
    New_Func(New_String);
}
