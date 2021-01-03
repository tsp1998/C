//Pointer to Pointer
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include<stdio.h>
void main()
{
		int y;
			int *p;
				int **p1;
	printf("\nEnter number:");
scanf("%d",&y);
	
	p=&y;
	p1=&p;
	printf("\nx=%d",y);
printf("\nAddress of Number x=%d\ni.e.value of p is=%d",&y,p);
	printf("\nAddress of pointer p of x=%d\ni.e.value of p1 is=%d",&p,p1);
		printf("\nAddress of pointer p1 of pointer p=%d",&p1);
		
		printf("\n\nx value using pointer p=%d",*p);
			printf("\nx value using pointer p1 pointer of p=%d",**p1);
}