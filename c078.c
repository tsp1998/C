//Display Book Information
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) 
SKNSCOE,Korti*/
#include<stdio.h>
void book();
void main()
{
book();
}
void book()
{
struct book
{
int page;
float price;
char name[40];
}s;
printf("\tEnter Number of  Pages:");
scanf("%d",&s.page);
printf("\tEnter price:");
scanf("%f",&s.price);
printf("\tEnter name of book:");
scanf("%s",&s.name);
printf("\n\tNumber of  Pages:%d",s.page);
printf("\n\tprice:%f",s.price);
printf("\n\tName of book:%s",s.name);
}