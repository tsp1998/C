//Program to Display Fibonacci Series of First Ten Numbers
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void main()
{
int i,fnum=0,snum=1,tnum;
printf("\n%d\t%d",fnum,snum);
for(i=1; i<=10; i++)
{
tnum=fnum+snum;
printf("\t%d",tnum);
fnum=snum;
snum=tnum;
}
}
