#include <stdio.h>
int main()
{
	char realvalue = 'x';
	int savedinmemory = (int)(realvalue);
	printf("%d", savedinmemory);
	printf("\n");
	char next;
	printf("Enter: ");
	scanf("%c", &next);
	printf("The interger value of %c is %d",next, next);
	return 0;
}