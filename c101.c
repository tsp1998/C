//Percentage of Five Subjects & Check Rank by Call by Value
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void rank (float a, float b,float c,float d,float e);
void main()
{
	float x,y,z,p,q;
	printf("\nEnter Two numbers:");
scanf("%f%f%f%f%f",&x,&y,&z,&p,&q);
	rank (x,y,z,p,q);
}
void rank (float a, float b,float c,float d,float e)
{
float m,sum, total=500;
sum=a+b+c+d+e;
printf("\n\tTHE SUMATION IS %f",sum);
m=sum*100/total;
printf("\n\tPercentage of Five Subjects %f",m);
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