//change value of variable by Pointer to Pointer by call by reference
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include<stdio.h>
void pointerToPointer(int **);
void pointer(int *);
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
	printf("\nAddress of pointer p of x=%d\nvalue of p is=%d",&p,p);
		printf("\nAddress of pointer p1 of pointer p=%d\nvalue of p1 is=%d",&p1,p1);
		
		printf("\n\nx value using pointer p=%d",*p);
			printf("\nx value using pointer p1 pointer of p=%d",**p1);
			
			pointer(&y);
		
}

void pointer(int *q){
	*q*=100;
		printf("\n\nChanged x value using pointer q=%d",*q);
			pointerToPointer(&q);
}

void pointerToPointer(int **q1){
	**q1*=10;
		printf("\nChanged x value using pointer q1 pointer of q=%d",**q1);
}