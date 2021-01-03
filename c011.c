//Swap Two Numbers without using Third Variable
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void main()
{
int a,b;
printf("\nEnter two number:");
scanf("%d%d",&a,&b);
printf("\n\tbefore swapping: a=%d,b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n\tafter swapping: a=%d,b=%d",a,b);
}