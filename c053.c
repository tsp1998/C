//Display Pattern
//a
//b c
//d e f
//g h i j
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void main()
{
int i,j,n=97;
for(i=97;i<=100;i++)
{
printf("\n\n");
for(j=97;j<=i;j++)
{
printf("\t%c",n);
n=n+1;
}
}
}