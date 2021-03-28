//Voting Eligibility Using Ternary operator
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void main()
{
  int check;
  int age;
  printf("\n\tEnter your Age=");
  scanf("%d", &age);

  age >= 18 ? printf("You Are Eligible to Vote") : printf("You Are  not Eligible to Vote");

  check = (age >= 18) ? 1 : 0;
  printf("\n\t%d", check);
}