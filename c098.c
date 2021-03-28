//Program to Display Numbers In Ascending Order
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <stdio.h>
void numser(); //ascending numbers
void main()
{
	numser();
}
void numser() //ascending numbers
{
	int i, n;
	printf("\nEnter First Number:");
	scanf("%d", &i);
	printf("\nEnter Last Number:");
	scanf("%d", &n);
	for (i = i; i <= n; i++)
	{
		printf("\n%d", i);
	}
}