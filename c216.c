//password
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <stdio.h>
#include <conio.h>
void main()
{
	int i = 0;
	char str[15];
	//str[i]=getch();
	//printf("%d",str[i]);
	while (1)
	{
		str[i] = getch();
		if (str[i] == 10)
			break;
		if (str[i] == 127)
		{
			str[--i] = '\0';
			printf("\b");
		}
		printf("*");
		i++;
	}
	puts("");
	puts(str);
}