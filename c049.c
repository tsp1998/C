//Display Pattern
//A
//B C
//D E F
//G H I J
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void main()
{
int a=65,i,j;
for(i=65;i<=68;i++)
{
printf("\n\n");
for(j=65;j<=i;j++)
{
printf("\t%c",a);
a=a+1;
}
}
}