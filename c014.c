//Verify Whether you are Eligible for Voting
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void main()
{
  int a;
  printf("\n\tEnter your age=");
  scanf("%d", &a);
  if (a >= 18)
  {
    printf("\n\tYou Are Eligible for Voting");
  }
  else
    printf("\n\tSorry,You Are not Eligible for Voting");
}