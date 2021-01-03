//Display Multiplication Of Matrix
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void main()
{
   int a[3][3], b[3][3], c[3][3],i,j;
   printf("Enter Content of First Matrix:\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("Element%d,%d: ",i+1,j+1);
           scanf("%d",&a[i][j]);
       }
   }
      printf("Enter Content of Second Matrix:\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("Element%d,%d: ",i+1,j+1);
           scanf("%d",&b[i][j]);
       }
   }
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
   c[i][j]=a[i][j]/b[i][j];
       }
   }
   printf("\nTabular form is \n");
   for(i=0;i<3;i++)
   {
       printf("\n");
       for(j=0;j<3;j++)
       {
           printf(" %d\t",c[i][j]);
       }
   }
}