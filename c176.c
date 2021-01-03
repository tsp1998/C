//Pointer to Pointer by call by reference
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include<stdio.h>
void pointer(int,int *,int **);
void main(){
		int y;
		int *p=&y;
	printf("\nEnter number:");
scanf("%d",&y);
	pointer(y,&y,&p);
}
void pointer(int y,int *p,int **p1)
{
	

printf("\nx=%d",y);
/*
printf("\nAddress of Number x=%d\ni.e.value of p is=%d",&y,p);
	printf("\nAddress of pointer p of x=%d\ni.e.value of p1 is=%d",&p,p1);
		printf("\nAddress of pointer p1 of pointer p=%d",&p1);
		
		*///here values of pointer gets change
		printf("\n\nx value using pointer p=%d",*p);
			printf("\nx value using pointer p1 pointer of p=%d",**p1);
}