//integer to string
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <stdio.h>
#include <tsp.h>
void its(char str[], long long int num);
void main()
{
	char str[100];
	its(str, 1001016773838738308);
	puts(str);
}
void its(char str[], long long int num)
{
	int r, i = 0;
	while (num != 0)
	{
		r = num % 10;
		str[i] = '0' + r;
		num /= 10;
		i++;
	}
}