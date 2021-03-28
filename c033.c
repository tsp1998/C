//Program to Display Fibonacci Series of Numbers
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void main()
{
  int i, pos, fnum = 0, snum = 1, tnum;
  printf("Enter Position: ");
  scanf(" %d", &pos);
  printf("\n%d\t%d", fnum, snum);
  for (i = 1; i <= pos; i++)
  {
    tnum = fnum + snum;
    printf("\t%d", tnum);
    fnum = snum;
    snum = tnum;
  }
}