//Percentage of Five Subjects
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include<stdio.h>
void rank (float a, float b,float c,float d,float e);
void main()
{
	float x,y,z,p,q;
printf("\nEnter Marks of Five Subject:");
scanf("%f%f%f%f%f",&x,&y,&z,&p,&q);
rank (x,y,z,p,q);
}
void rank (float a, float b,float c,float d,float e)
{
float per,sum, total=500;
sum=a+b+c+d+e;
printf("\n\tTHE SUMATION IS %f",sum);
per=sum*100/total;
printf("\n\tPercentage of Five Subjects %f\n\n",per);

main();
}