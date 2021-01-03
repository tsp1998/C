//Sum of Digits of Number
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void main()
 {
  int no, sum = 0, rem,i;
  printf("\tEnter the Number");
  scanf("%d", &no);
  for(i=0;no!=0;i++)
   {
    rem = no % 10;
    sum = sum + rem;
    no = no / 10;
  }
  printf("\n\tSum of digits of entered number = %d", sum);
  }