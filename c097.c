//Program to Find Factorial of Given Number by call by Address (Reference)
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <stdio.h>
void evod(int *no);
void main()
{
	int y;
	printf("\nEnter number:");
	scanf("%d", &y);
	evod(&y);
}
void evod(int *no)
{
	int i, fac = 1;
	for (i = 1; i <= *no; i++)
	{
		fac = fac * i;
	}
	printf("\n\t%d", fac);
}