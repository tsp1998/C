//Swap Two Numbers by using Third Variable
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void main()
{
int a,b,temp;
printf("\nEnter two number:");
scanf("%d%d",&a,&b);
printf("\n\tbefore swapping: a=%d,b=%d",a,b);
temp=a;
a=b;
b=temp;
printf("\n\tafter swapping: a=%d,b=%d",a,b);
}