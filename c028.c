//Program to Display Sum of Digits of Number
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void main()
{
  int no, sum = 0, rem;
  printf("\tEnter the Number");
  scanf("%d", &no);
  while (no != 0)
  {
    rem = no % 10;
    sum = sum + rem;
    no = no / 10;
  }
  printf("\n\tSum of digits of entered number = %d", sum);
}