//Display Bike Information
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void pul();
void main()
{
pul();
return 0;
}
void pul()
{
struct puls
{
int cc,avg;
char bik_name[40];
char comp_name[40];
}s;
printf("\n\tEnter Bike name:");
scanf("%s",&s.bik_name);
printf("\n\tEnter Company:");
scanf("%s",&s.comp_name);
printf("\n\tEnter CC of Bike:");
scanf("%d",&s.cc);
printf("\n\tEnter Average of Bike:");
scanf("%d",&s.avg);
printf("\n\tBike name:%s",s.bik_name);
printf("\n\tCompany:%s",s.comp_name);
printf("\n\tCC of Bike:%d",s.cc);
printf("\n\tAverage of Bike:%d",s.avg);
}
