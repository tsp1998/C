//Real & Imaginary Part Of Complex Number
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <stdio.h>
void main()
{
	char str[20], str1[20], str2[20];
	int i, j;
	printf("Enter Complex Number:");
	gets(str);
	for (i = 0; str[i] != '+'; i++)
	{
		str1[i] = str[i];
	}
	str1[i] = '\0';
	i++;
	for (j = 0; str[i] != 'i'; j++)
	{
		str2[j] = str[i];
		i++;
	}
	str2[j] = '\0';
	printf("real part:%s", str1);
	printf("\nimg part:%s", str2);
}