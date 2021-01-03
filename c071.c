//Display Addition of 2by2 Matrix
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void main()
{
   int a[2][2], b[2][2], c[2][2],i,j;
   printf("Enter Content of First Matrix:\n");
   for(i=0;i<2;i++)
   {
       for(j=0;j<2;j++)
       {
           printf("Element%d,%d: ",i+1,j+1);
           scanf("%d",&a[i][j]);
       };
   };
      printf("Enter Content of Second Matrix:\n");
   for(i=0;i<2;i++)
   {
       for(j=0;j<2;j++)
       {
           printf("Element%d,%d: ",i+1,j+1);
           scanf("%d",&b[i][j]);
       };
   };
   printf("\n Addition of Matrix\n");
   for(i=0;i<2;i++)
   {
       printf("\n");
       for(j=0;j<2;j++)
       {
       	   c[i][j]=b[i][j]+a[i][j];
           printf(" %d\t",c[i][j]);
       };
   };
return 0;
}
