//Display Subtraction using Array
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void main()
{
int a[5],b[5],c[5],i;
printf("\n\tEnter Numbers of  First Array:");
for(i=1; i<=5; i++)
{
scanf("%d",&a[i]);
};
printf("\n\tEnter Numbers of  Second Array:");
for(i=1; i<=5; i++)
{
scanf("%d",&b[i]);
};
printf("\n\t Subtraction:");
for(i=1; i<=5; i++)
{
c[i]=a[i]-b[i];
printf("\t%d",c[i]);
};
}