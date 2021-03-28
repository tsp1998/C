//factorial by Tandale Shubham method
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
email-tsp@outlook.in
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	int num;
	printf("enter a number:");
	scanf("%d", &num);
	for (int i = num - 1; i > 0; i--)
	{
		num = num * i;
	}
	printf("factorial of Number:%d\n", num);
	main();
}