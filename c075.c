//Check Number is Even or Odd using Function
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void evod(int a);
void main()
{
  int x;
  printf("\nEnter number:");
  scanf("%d", &x);
  evod(x);
  return 0;
}
void evod(int a)
{
  if (a % 2 == 0)
  {
    printf("\n\tYour Number is even");
  }
  else
  {
    printf("\n\tYour Number is odd");
  }
}
