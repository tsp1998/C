//Append write File
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) 
SKNSCOE,Korti.*/
#include<stdio.h>
void main()
{
FILE *f;
f=fopen("textwr.txt","a+");

if(f==NULL)
printf("\t\nFile not Present");
else
printf("\t\nFile Present");

fclose(f);
}