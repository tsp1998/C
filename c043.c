//Display Pattern
//1
//2 3
//4 5 6
//7 8 9 10
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void main()
{
int i,a=1,j;
for(i=1;i<=4;i++)
{
printf("\n\n");
for(j=1;j<=i;j++)
{
printf("\t%d",a);
a++;
};
};
}