//Addition & Subtraction Of Matrix by TSP Method
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
   int i,j,row,col;
   char ch;
   char specifier[20];
    char input[100];
    char news[1];
    	ch=48+1;
    	news[0]=ch;
   	printf("%c",ch);
   	puts(news);
     printf("Enter Row Size:");
           scanf("%d",&row);
            printf("Enter Column Size:");
           scanf("%d",&col);
  
      for(i=0;i<col*2;i++)
   {
   	specifier[i]='%';
   	specifier[i+1]='f';
   	i++;
   }
     for(i=0;i<col;i++)
   {
   	ch=49+i;
   	news[0]=ch;
strcat(input,"&a[i][");
strcat(input,news);
//input[strlen(input)+1]=ch;
//strcat(input,ch);
//strcat(input,"i");
strcat(input,"],");
   }
     puts(specifier);
   
   puts(input);
   
   printf("Enter Content of First Matrix:\n");
   for(i=0;i<3;i++)
   {
      printf("Enter Row %d: ",i+1);
           scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
       
   }
   
   
      printf("Enter Content of Second Matrix:\n");
     for(i=0;i<3;i++)
   {
      printf("Enter Row %d: ",i+1);
           scanf("%d%d%d",&b[i][0],&b[i][1],&b[i][2]);
       
   }
   
   
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
   c[i][j]=b[i][j]+a[i][j];
       }
   }
   
   
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
       }
       
         for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
   c[i][j]=-b[i][j]+a[i][j];
       }
   }
         printf("\n\nSubtraction:\n");
   for(i=0;i<3;i++)
   {
       printf("\n");
       for(j=0;j<3;j++)
       {
       if(i==1 && j==2)
	{
       	  printf(" %d - ",a[i][j]);
       	  goto b1;
	}
         printf(" %d ",a[i][j]);
         if(j==2)
	{
       	  printf("  ",a[i][j]);
       
	}
       }
       
       b1:
for(j=0;j<3;j++)
       {
       if(i==1 && j==2)
	{
       	  printf(" %d = ",b[i][j]);
       	  goto c1;
	}
	
         printf(" %d ",b[i][j]);
          if(j==2)
	{
       	  printf("  ",a[i][j]);
	}
       }
       
       c1:
         for(j=0;j<3;j++)
       {
         printf(" %d ",c[i][j]);
       }
       }
   }