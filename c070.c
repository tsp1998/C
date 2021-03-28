//Program to Check Number is Even or Odd, Number is Positive or Negative
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
  int t, ch;
  char c;
  printf("\n\t1.Number is Even or Odd\n\t2.Number is Positive or Negative\n\t3.Character is Vowel or Consonent");
  printf("\n\tenter your Choice=");
  scanf("%d", &ch);
  switch (ch)
  {
  case 1:
    printf("\n\tEnter your Number=");
    scanf("%d", &t);
    if (t % 2 == 0)
    {
      printf("\n\tYour Number is even");
    }
    if (t % 2 != 0)
    {
      printf("\n\tYour Number is odd");
    }
    break;
  case 2:
    printf("\n\tEnter your Number=");
    scanf("%d", &t);
    if (t > 0)
    {
      printf("\n\tYour Number is Positive");
    }
    if (t < 0)
    {
      printf("\n\tYour Number is Negative");
    }
    break;
  default:
    printf("\n\tSorry Your Choice is Invalid");
    exit(0);
    break;
  }
}