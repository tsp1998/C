//Display Pattern
//A
//A B
//A B C
//A B C D
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void main()
{
int i,j;
for(i=65;i<=68;i++)
{
printf("\n\n");
for(j=65;j<=i;j++)
{
printf("\t%c",j);
}
}
}