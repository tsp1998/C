//Program to Find Factorial of Given Number using Function
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void fac(int no);
void main()
{
int x;
printf("\nEnter number:");
scanf("%d",&x);
fac(x);
return 0;
}
void fac(int no)
{
int i,fac=1;
for(i=1; i<=no; i++)
{
fac=fac*i;
}
printf("\n\t%d",fac);
}
