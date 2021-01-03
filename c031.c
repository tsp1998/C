//Program to First Ten Numbers In Ascending Order, First Ten Numbers In Descending Order, only Even Numbers in First Ten Numbers and only Odd Numbers in First Ten Numbers
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,ch;
printf("\n\t1.First Ten Numbers In Ascending Order\n\t2.First Ten Numbers In Descending Order\n\t3.only Even Numbers in First Ten Numbers\n\t4.only Odd Numbers in First Ten Numbers");
printf("\n\tenter your Choice=");
scanf("%d",&ch);
switch(ch)
{
case 1:
for(i=1; i<=10; i++)
{
printf("\n\t%d",i);
}
break;
case 2:
for(i=10; i>=1; i--)
{
printf("\n\t%d",i);
}
break;
case 3:
for(i=1; i<=10; i++)
{
if(i%2==0)
{
printf("\n\t%d",i);
}
}
break;
case 4:
for(i=1; i<=10; i++)
{
if(i%2!=0)
{
printf("\n\t%d",i);
}
}
break;
default:
printf("\n\tSorry Your Choice is Invalid");
exit(0);
break;
}
}