//Program to Display Sum of First Numbers
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void main()
{
  int i, pos, sum;
  printf("Enter Position:");
  scanf("%d", &pos);
  for (i = 1; i <= pos; i++)
  {
    sum = sum + i;
  }
  printf("\n\t%d", sum);
}