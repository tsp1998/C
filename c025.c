//Percentage of Five Subjects
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void main()
{
float per,a,b,c,d,e,sum, total=500;
printf("\nEnter marks of five Subjects:");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
sum=a+b+c+d+e;
printf("\n\tTHE SUMATION IS %f",sum);
per=sum*100/total;
printf("\n\tPercentage of Five Subjects %f",per);
}