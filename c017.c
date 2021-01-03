//Check Wheather Your get First Class,Second Class ,Distinction or Fail
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void main()
{
int m;
printf("\n\tEnter your Marks=");
scanf("%d", &m);
if(m>=70 && m<=100)
{
printf("\n\tYou Get Distinction");
}
if(m>=60 && m<70)
{
printf("\n\tYou Get First Class");
}
if(m>=40 && m<60)
{
printf("\n\tYou Get Second Class");
}
if(m>=0 && m<40)
{
printf("\n\tYou are Fail");
}
}