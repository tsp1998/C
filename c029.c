//Program to Display only Even Numbers in First Ten Numbers
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void main()
{
  int i;
  for (i = 1; i <= 10; i++)
  {
    if (i % 2 == 0)
    {
      printf("\n\t%d", i);
    }
  }
}
