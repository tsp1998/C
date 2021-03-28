//Alphabets Using ASCII Numbers
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
email-tsp@outlook.in
*/
#include <stdio.h>
void main()
{
	int i;
	//capital
	printf("Capital Letters\n");
	for (i = 65; i <= 90; i++)
	{
		printf("%c\n", i);
	}
	//small
	printf("\nSmall Letters");
	for (i = 97; i <= 122; i++)
	{
		printf("\n%c", i);
	}
}