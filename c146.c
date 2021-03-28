//list the strings
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	int i, j, k = 1, l, m, n;
	int length[10];
	char str1[300], str2[30], str3[30];
	gets(str1);
	puts(str1);
	length[0] = 0;
	for (i = 1; i >= 1; i++)
	{
		printf("enter next");
		gets(str2);
		length[i] = strlen(str1);
		if (strlen(str2) == 1)
		{
			goto result;
		}
		strcat(str1, str2);
		puts(str1);
		k++;
	}
result:
	for (i = 0; i < k; i++)
	{
		for (j = length[i]; j < length[i + 1]; j++)
		{
			printf("%c", str1[j]);
		}
		printf("\n");
	}
}