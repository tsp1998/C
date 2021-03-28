//find Interest using Function
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void in(int a, int b, int c);
void main()
{
  int t;
  float p, r;
  printf("\nEnter Principal:");
  scanf("%f", &p);
  printf("\nEnter Rate:");
  scanf("%f", &r);
  printf("\nEnter Time:");
  scanf("%d", &t);
  in(p, r, t);
  return 0;
}
void in(int a, int b, int c)
{
  float i;
  i = (a * b * c) / 100;
  printf("\nInterest:%f", i);
}
