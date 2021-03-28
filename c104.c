//Program to Perform Addition,Subtraction,Multiplication and Division
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) 
SKNSCOE,Korti.*/
#include <stdio.h>
void main()
{
  int t, s, p, ch;
  printf("\n\tEnter Two Numbers=");
  scanf("%d%d", &t, &s);
  p = t + s;
  printf("\n\tAddition of Numbers=%d", p);
  p = t - s;
  printf("\n\tSubtraction of Numbers=%d", p);
  p = t * s;
  printf("\n\tMultiplication of Numbers=%d", p);
  p = t / s;
  printf("\n\tDivision of Numbers=%d", p);
}