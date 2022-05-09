#include <stdio.h>

void main()
{
    int three_dem_array[3][2][2] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}}; 
    printf("%p\n", three_dem_array);
    printf("%p\n", &three_dem_array);
    printf("%p\n", *three_dem_array);
    printf("%d\n", three_dem_array[0][0][0]);
    int (*ptr)[2][2] = three_dem_array;
    printf("%p\n", ptr);
    printf("%p\n", &three_dem_array[2][0][0]);
    printf("%d\n", three_dem_array[2][0][0]);
    printf("%p\n", ptr + 1);
    printf("%p\n", ptr + 8);
    int multi_dim_array[2][3][4] = {{{1,2,3,4},{5,6,7,8},{9,10,11,12}},{{13,14,15,16},{17,18,19,20},{21,22,23,24}}};
    printf("%p\n", multi_dim_array);
}
