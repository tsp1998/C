//list the strings
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti.
Email-tsp@outlook.in
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	int i = 0, k, j;
	int cmp;
	int count = 0;
	int length[10];
	int newlength[10];
	length[i] = 0;
	char strtemp[30], str1[30], str[300], str2[30];

	printf("enter name-");
	gets(str);
	i++;
	length[i] = strlen(str);

string2:
	printf("enter next-");
	gets(str2);

	if (strlen(str2) == 1)
	{
		goto result;
	}

	strcat(str, str2);
	i++;
	length[i] = strlen(str);
	goto string2;

result:

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[length[j]] > str[length[j + 1]])
			{
				k = length[j];
				length[j] = length[j + 1];
				length[j + 1] = k;
				//	newlength[j+1]=length[j];
			}
			/*	if(str[length[j]]<str[length[j+1]])
       	{
/	newlength[j]=length[j];
}
       }*/
		}
	}

	puts(str);
}