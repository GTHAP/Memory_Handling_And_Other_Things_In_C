#include<stdio.h>

void main()
{
    int two_dim_array[2][2] = {{ 2, 4 },{ 9, 7 }};
    printf("%p\n", two_dim_array); // printing the address of the 2D array
    printf("%p\n", *two_dim_array); // printing the address of the 2D array
    printf("%p\n", &two_dim_array); // printing the address of the 2D array
    printf("%p\n", &two_dim_array[0][0]); // printing the address of the first value in the 2D array (row 0, column 0)
    printf("%p\n", &two_dim_array[1][0]); // printing the address of the value at (row 1, column 0)
    printf("%d\n", two_dim_array[1][0]); // printing the value stored at (row 0, column 1)
}
