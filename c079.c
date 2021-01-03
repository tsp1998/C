//Display Employee Information
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void emp();
void main()
{
emp();
}
void emp()
{
struct emp
{
int id;
float sal;
char name[40];
char add[50];
}s;
printf("\n\tEnter name of  employee:");
scanf("%s",&s.name);
printf("\n\tEnter Adress of  employee:");
scanf("%s",&s.add);
printf("\n\tEnter id number of  employee:");
scanf("%d",&s.id);
printf("\n\tEnter Salary of  employee:");
scanf("%f",&s.sal);
printf("\n\tName of  employee:%s",s.name);
printf("\n\tAdress of  employee:%s",s.add);
printf("\n\tId number of  employee:%d",s.id);
printf("\n\tSalary of  employee:%f",s.sal);
}
