//Display Contents using  2D Array
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void main()
{
   int a[3][3],i,j;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("Enter Number%d,%d: ",i+1,j+1);
           scanf("%d",&a[i][j]);
       }
   }
   printf("\nTabular form is \n");
   for(i=0;i<3;i++)
   {
       printf("\n");
       for(j=0;j<3;j++)
       {
           printf(" %d\t",a[i][j]);
       }
   }
}