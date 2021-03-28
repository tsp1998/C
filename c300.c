//ASCII of every letter
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void main()
{
  int f, l, i;
  printf("Enter First Number:");
  scanf("%d", &f);
  printf("Enter Last Number:");
  scanf("%d", &l);
  for (i = f; i < l; i++)
    printf("\n%d=%c", i, i);
}