//Display Star Pattern
//* * * *
//* * *
//* *
//*
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void main()
{
int i,j;
for(i=1;i<=4;i++)
{
printf("\n\n");
for(j=4;j>=i;j--)
{
printf("\t*");
};
};
}