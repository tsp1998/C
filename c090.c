//Swap Two Numbers without using Third Variable by call by value
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void swipe(float a, float b);
void main()
{
		float x,y;
	printf("\nEnter Two numbers:");
scanf("%f%f",&x,&y);
	swipe(x,y);
}
void swipe(float a, float b)
{
printf("\n\tbefore swapping: a=%f,b=%f",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n\tafter swapping: a=%f,b=%f",a,b);
}