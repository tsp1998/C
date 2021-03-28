//Display Pattern
//a
//a b
//a b c
//a b c d
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void main()
{
  int i, j;
  for (i = 97; i <= 100; i++)
  {
    printf("\n\n");
    for (j = 97; j <= i; j++)
    {
      printf("\t%c", j);
    }
  }
}