#include <stdio.h>

void main()
{
    int two_dim_array[2][6] = {{ 1, 2, 3, 4, 5, 6 },{ 7, 8, 9, 10, 11, 12 }};
    
    for(int i = 0; i <= 1; ++i)
    {
        for(int j = 0; j <= 5; ++j)
        {
            printf("%d ", two_dim_array[i][j]);
        }
    }
}
