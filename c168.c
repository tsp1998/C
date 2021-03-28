//Global Variable
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
int a = 0; //global scope variable used in all functions & everywhere
#include <stdio.h>
void numser();
void main()
{
	printf("\na=%d", a);
	a++;
	numser();
	printf("\na=%d", a);
	a++;
	numser();
}
void numser()
{
	printf("\na=%d", a);
	a++;
}