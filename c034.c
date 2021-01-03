//Program to Find Factorial of Given Number
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void main()
{
int i,no,fac=1;
printf("\n\tEnter the Number:");
scanf("%d",&no);
for(i=1; i<=no; i++)
{
fac=fac*i;
}
printf("\n\t%d",fac);
}