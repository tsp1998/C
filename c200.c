//Display strings as You want
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include<stdio.h>
void main()
{
   int i,j,m,n;
   char str[100][100];
   printf("Enter Name :");
   gets(str);
   printf("How many times horizontally Print name:");
   scanf("%d",&m);
    printf("How many times Vertically Print name:");
   scanf("%d",&n);
   for(i=0;i<m;i++)
   {
   	puts("");
       for(j=0;j<n;j++)
       {
           printf("%s",str);
       }
   }
}