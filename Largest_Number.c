#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int num;
  double *data;
  printf("Enter the total number of elements: ");
  scanf("%d", &num);

  // Allocating memory for num elements
  data = (double *)calloc(num, sizeof(double));
  if (data == NULL) {
    printf("Error!!! memory not allocated.");
    exit(0);
  }

  // Storing numbers entered by the user.
  for (int i = 0; i < num; ++i) 
  {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", data + i);
  }

  // Finding the largest number
  for (int i = 1; i < num; ++i) 
  {
    if (*data < *(data + i))
      *data = *(data + i);
  }
  printf("Largest number = %.2lf", *data);

  free(data);

  return 0;
}