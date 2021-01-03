//Swap Two Numbers by using Third Variable Using Function
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void swip(int a, int b);
void main()
{
int x,y;
printf("\nEnter two number:");
scanf("%d%d",&x,&y);
swip(x,y);
return 0;
}
void swip(int a, int b)
{
int temp;
printf("\n\tbefore swapping: a=%d,b=%d",a,b);
temp=a;
a=b;
b=temp;
printf("\n\tafter swapping: a=%d,b=%d",a,b);
}
