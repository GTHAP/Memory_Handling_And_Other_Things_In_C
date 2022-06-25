// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 and so on
// Add the previous two numbers to get the next number in the series

#include <stdio.h>
int main() 
{
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
			
	
	