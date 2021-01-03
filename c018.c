//Program to Perform Addition,Subtraction,Multiplication and Division
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
#include<stdlib.h>
void main()
{
int t,s,p,ch;
printf("\n\t1.Addition\n\t2.Subtraction\n\t3.Multiplication\n\t4.Division");
printf("\n\tenter two numbers=");
scanf("%d%d",&t,&s);
printf("\n\tenter your Choice=");
scanf("%d",&ch);
switch(ch)
{
case 1:
p=t+s;
printf("\n\tAddition of Numbers=%d",p);
break;
case 2:
p=t-s;
printf("\n\tSubtraction of Numbers=%d",p);
break;
case 3:
p=t*s;
printf("\n\tMultiplication of Numbers=%d",p);
break;
case 4:
p=t/s;
printf("\n\tDivision of Numbers=%d",p);
break;
default:
printf("\n\tSorry Your Choice is Invalid");
exit(0);
break;
}
}

