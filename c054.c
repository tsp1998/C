//Display Contents Of Array
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <stdio.h>
void main()
{
  int i, j, x[5];
  printf("\t Enter Contents:");
  for (i = 1; i <= 5; i++)
  {
    scanf("%d", &x[i]);
  };
  printf("\n\tArray:");
  for (i = 1; i <= 5; i++)
  {
    printf("\t%d", x[i]);
  }
}