#include<stdio.h>
int main()
{
    int x = 0; // we initialize the value 'x' to '0'
    int y = 0; // we initialize the value 'y' to '0'
    x++; // post-increment
    ++y; // pre-increment
    printf("%d\n", x); // the value will be '1' 
    printf("%d\n", y); // the value will be '1'
    printf("%d\n", x++); // the value printed out will still be '1'
    printf("%d\n", ++y); // the value printed out will be '2'
    printf("%d\n", x); // now the value of 'x' will be '2'
    printf("%d\n", y); // as seen earlier the value of 'y' is '2'
}
