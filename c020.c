//Program to Find Area of Circle, Area of Square, Volume of Cube and Perimeter of Circle
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
#include<stdlib.h>
void main()
{
int v,s,r,ch;
float p,a;
printf("\n\t1.Area of Circle\n\t2.Area of Square\n\t3.Volume of Cube\n\t4.Perimeter of Circle");
printf("\n\tenter your Choice=");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\n\tenter the value of Radius=");
scanf("%d",&r);
a=3.14*r*r;
printf("\n\tArea of Circle=%f",a);
break;
case 2:
printf("\n\tenter the value of Side=");
scanf("%d",&s);
a=s*s;
printf("\n\tArea of Square=%f",a);
break;
case 3:
printf("\n\tenter the value of Side=");
scanf("%d",&s);
v=s*s*s;
printf("\n\tVolume of Cube=%d",v);
break;
case 4:
printf("\n\tenter the value of Radius=");
scanf("%d",&r);
p=2*3.14*r;
printf("\n\tPerimeter of Circle=%f",p);
break;
default:
printf("\n\tSorry Your Choice is Invalid");
exit(0);
break;
}
}