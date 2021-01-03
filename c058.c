//Multiplication Of Matrix
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include<stdio.h>
void main()
{
   float a[10][10], b[10][10], c[10][10];
   int i,j,m,n,m2,k,n2;
   float sum=0;
   
   printf("First Matrix: \n");
    printf("Rows:");
           scanf("%d",&m);
              printf("Columns:");
           scanf("%d",&n);
           
            printf("Second Matrix: \n");
    printf("Rows:");
           scanf("%d",&m2);
              printf("Columns:");
           scanf("%d",&n2);
   
     if(n!=m2)
   {
	printf("Row of M1 should equal to Columns of M2");
	main();
}
   
    printf("First Matrix: ");
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           printf("M1[%d][%d]: ",i+1,j+1);
           scanf("%f",&a[i][j]);
       }
   }
        printf("Second Matrix: ");
   for(i=0;i<m2;i++)
   {
       for(j=0;j<n2;j++)
       {
           printf("M2[%d][%d]: ",i+1,j+1);
           scanf("%f",&b[i][j]);
       }
   }
 
   
   for(i=0;i<m;i++)
   {
       for(j=0;j<m2;j++)
       {
       	 for(k=0;k<n2;k++)
       {
       	 sum+=a[i][k]*b[k][j];
       }
         c[i][j]=sum;
         sum=0;
       }
   }
   
   printf("\nProduct: ");
   for(i=0;i<m;i++)
   {
   	printf("\n");
       for(j=0;j<n;j++)
       {
           printf("%f ",c[i][j]);
       }
   }
   /*
   printf("\nAddition:\n");
   for(i=0;i<3;i++)
   {
       printf("\n");
       for(j=0;j<3;j++)
       {
       if(i==1 && j==2)
	{
       	  printf(" %d + ",a[i][j]);
       	  goto b;
	}
         printf(" %d ",a[i][j]);
         if(j==2)
	{
       	  printf("  ",a[i][j]);
       
	}
       }
       
       b:
for(j=0;j<3;j++)
       {
       if(i==1 && j==2)
	{
       	  printf(" %d = ",b[i][j]);
       	  goto c;
	}
	
         printf(" %d ",b[i][j]);
          if(j==2)
	{
       	  printf("  ",a[i][j]);
	}
       }
       
       c:
         for(j=0;j<3;j++)
       {
         printf(" %d ",c[i][j]);
       }
       }*/
   }