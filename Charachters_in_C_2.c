#include <stdio.h>
#include <string.h>

void main()
{
    char name[] = "ICON OF SIN";
    printf("%p\n", &name); // memory address of character array - name
    printf("%s\n", name); // value stored in name
    int size = sizeof(name); 
    printf("%d\n", size); // size of name
    int len = strlen(name);
    printf("%d\n", len); // length of the string
    
    char *ptr = name; // character pointer variable that points to the initial memory address of the array - name
    printf("%p\n", ptr);
    printf("%c\n", *ptr);
    printf("%d\n", *ptr);
    *ptr = 'U'; // modifying the initial value in the array by changing the value of ptr to U
    printf("%c\n", *ptr);
    printf("%s\n", name);
}
