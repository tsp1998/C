//number tables
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void main()
{
   int i,n,j;
   	printf("enter last number:");
   	scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=10;j++)
       {
       	printf("%d  ",i*j);
       }
       printf("\n\n");
       }
       }