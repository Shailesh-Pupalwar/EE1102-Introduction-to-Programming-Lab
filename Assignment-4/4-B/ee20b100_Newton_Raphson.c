#include <stdio.h>

int main()
{
  float array[10],swap;
  int n, c, d;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d float numbers\n", n);
  for (c = 0; c < n; c++)
    scanf("%f", &array[c]);
  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] <= array[d+1])
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  printf("Sorted list in Descending order:\n");

  for (c = 0; c < n; c++)
     printf("%f\n", array[c]);

  return 0;
}