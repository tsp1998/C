s//Program to find Interest
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <stdio.h>
#include <float.h>
void main()
{
  int p, r, t;
  float i;
  printf("\nEnter Principal:");
  scanf("%d", &p);
  printf("\nEnter Rate:");
  scanf("%d", &r);
  printf("\nEnter Time:");
  scanf("%d", &t);
  i = (p * r * t) / 100;
  printf("\nInterest:%f\n\n", i);

  main();
}