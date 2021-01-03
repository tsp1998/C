//Display Array
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) 
SKNSCOE,Korti.*/
#include<stdio.h>
void main()
{
int a[5],i;
printf("\n\tEnter Numbers of Array:");
for(i=1; i<=5; i++)
{
scanf("%d",&a[i]);
};
printf("\nArray:\t");
for(i=1; i<=5; i++)
{
printf("%d",a[i]);
printf("\t");
};
}