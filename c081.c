//Display Collage Information
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void cllg();
void main()
{
cllg();
return 0;
}
void cllg()
{
struct clg
{
int n,m;
char un_name[40];
char clg_name[40];
char add[50];
char prin_name[40];
}s;
printf("\n\tEnter College name:");
scanf("%s",&s.clg_name);
printf("\n\tEnter Adress:");
scanf("%s",&s.add);
printf("\n\tEnter University name:");
scanf("%s",&s.un_name);
printf("\n\tEnter Principal name:");
scanf("%s",&s.prin_name);
printf("\n\tEnter Number of Fauculty:");
scanf("%d",&s.n);
printf("\n\tEnter Strenth of Student:");
scanf("%d",&s.m);
printf("\n\tCollage Name:%s",s.clg_name);
printf("\n\tEnter Adress:%s",s.add);
printf("\n\tEnter University name:%s",s.un_name);
printf("\n\tEnter Principal name:%s",s.prin_name);
printf("\n\tEnter Number of Fauculty:%d",s.n);
printf("\n\tEnter Strenth of Student:%d",s.m);
}
