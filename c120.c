//Sum,subtraction,multiplication,division of Digits of Number
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) SKNSCOE,Korti.*/
#include <stdio.h>
void main()
{
  int no, sum = 0, sub = 0, prod = 1, rev[50], rem, i = 0;
  float div = 0;
  printf("\tEnter the Number");
  scanf("%d", &no);
  printf("\tReverse of Number:");
  while (no != 0)
  {
    rem = no % 10;
    sum = sum + rem;
    rev[i] = rem;
    i++;
    prod *= rem;
    no = no / 10;
  }
  for (int k = 0; k < i; k++)
  {
    printf("%d", rev[k]);
  }
  sub = rev[i - 1];
  div = rev[i - 1];
  for (int j = i - 2; j >= 0; j--)
  {
    sub -= rev[j];
    div /= rev[j];
  }
  printf("\n\tSum of digits of entered number = %d", sum);
  printf("\n\tSubtraction of digits of entered number = %d", sub);
  printf("\n\tMultiplication of digits of entered number = %d", prod);
  printf("\n\tDivision of digits of entered number = %f", div);
}