//pyramid of desired size
/*
Tandale Shubham Parmeshwar
SKNSCOE,Korti
tsp@outlook.in
*/
#include <stdio.h>
int pyramid(int);
void main()
{
  int row;
  printf("Enter size of Pyramid (size of rows):");
  scanf("%d", &row);
  pyramid(row);
}
int pyramid(int row)
{
  int i, j, k;
  for (i = 1; i <= row; i++)
  {
    for (j = row; j >= i; j--)
    {
      printf(" ");
    }
    for (k = 1; k <= 2 * i - 1; k++)
    {
      printf("$");
    }

    printf("\n");
  }
  return 0;
}