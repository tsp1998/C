//Program to Display Desired Fibonacci Series of First Ten Numbers
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void main()
{
int i,fnum,snum,tnum,pos;
printf("enter first number:");
scanf("%d",&fnum);
printf("enter second number:");
scanf("%d",&snum);
printf("enter position:");
scanf("%d",&pos);
printf("\n%d\t%d",fnum,snum);
for(i=1; i<=pos; i++)
{
tnum=fnum+snum;
printf("\t%d",tnum);
fnum=snum;
snum=tnum;
}
}
