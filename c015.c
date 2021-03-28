//Check Wheather the Number is Positive,Negative,even & odd
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) 
SKNSCOE,Korti.*/
#include <stdio.h>
void main() //main function
{
  int a;
  printf("\n\tEnter your Number=");
  scanf("%d", &a);
  if (a > 0)
  {
    printf("\n\tYour Number is Positive");
  }
  if (a < 0)
  {
    printf("\n\tYour Number is Negative");
  }
  if (a % 2 == 0)
  {
    printf("\n\tYour Number is even");
  }
  if (a % 2 != 0)
  {
    printf("\n\tYour Number is odd");
  }
}
