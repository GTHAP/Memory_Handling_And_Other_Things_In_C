#include <stdio.h>
int main()
{
int a, b, result;
printf("Enter the first number: ", a);
scanf("%d", &a);
printf("Enter the second number: ", b);
scanf("%d", &b);
result = a + b;
printf("Result of addition: %d\n", result);
result = a - b;
printf("Result of subtraction: %d\n", result);
result = a * b;
printf("Result of multiplication: %d\n", result);
result = a / b;
printf("Result of division: %d\n", result);
result = a % b;
printf("Result of modulus: %d\n", result);
return 0;
}
 