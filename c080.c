//Display Student Information
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void sdt();
void main()
{
  sdt();
}
void sdt()
{
  struct sdt
  {
    int roll;
    char div;
    char name[40];
    char clg_name[40];
    char add[50];
  } s;
  printf("\n\tEnter name of  Student:");
  scanf("%s", &s.name);
  printf("\n\tEnter Adress of  Student:");
  scanf("%s", &s.add);
  printf("\n\tEnter College name of  Student:");
  scanf("%s", &s.clg_name);
  printf("\n\tEnter roll number of  Student:");
  scanf("%d", &s.roll);
  printf("\n\tEnter Division of  Student:");
  scanf("%c", &s.div);
  printf("\n\tName of  Student:%s", s.name);
  printf("\n\tAdress:%s", s.add);
  printf("\n\tCollage Name:%s", s.clg_name);
  printf("\n\tDivision:%c", s.div);
  printf("\n\troll number:%d", s.roll);
}
