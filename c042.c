//Display Pattern
//1
//1 2
//1 2 3
//1 2 3 4
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void main()
{
  int i, j;
  for (i = 1; i <= 4; i++)
  {
    printf("\n\n");
    for (j = 1; j <= i; j++)
    {
      printf("\t%d", j);
    };
  };
}