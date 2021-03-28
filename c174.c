//list the strings
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	int i, temp = 0, i1;
	int cmp;
	int newcount = 0, oldcount = 0, lnoldcount = 0, lnnewcount = 0;
	int l, k, count1 = 0;
	char empty[1] = " ";
	int count = 0;
	char strtemp[30], str1[30], str2[30];
	struct list
	{
		int ln[10];
		char str[300];
	};
	struct list oldlist;
	struct list newlist;
	oldlist.ln[0] = 0;
	newlist.ln[0] = 0;

	strcpy(str1, empty);
	printf("str1-");
	puts(str1);
	printf("%d", strlen(str1));
	strcpy(str2, empty);
	printf("str2-");
	puts(str2);
	printf("%d", strlen(str2));

	printf("str1-");
	str1[0] = '\0';
	puts(str1);
	printf("%d", strlen(str1));
	strcpy(str2, empty);
	printf("str2-");
	str2[0] = '\0';
	puts(str2);
	printf("%d", strlen(str2));

	printf("enter name-");
	for (i = 0; i >= 0; i++)
	{
		gets(strtemp);

		//termination

		if (strlen(strtemp) == 1)
		{
			goto arrange;
		}
		count++;
		strcat(oldlist.str, strtemp);
		oldlist.ln[i + 1] = strlen(oldlist.str);

		printf("enter next name-");
	}

arrange:

	strcpy(str1, empty);
	strcpy(str2, empty);
	str1[0] = '\0';
	str2[0] = '\0';

	printf("\n\n");
	printf("old-");
	puts(oldlist.str);
	printf("Count-%d", count);
	printf("\n\noldarray-");
	for (i = 0; i <= count; i++)
	{
		printf("%d ", oldlist.ln[i]);
	}

newstring:
	count1++;
	for (i = 0; i < 300; i++)
	{
		newlist.str[i] = '\0';
	}
	k = 0;
	if (count1 == count)
	{
		goto result;
	}
	//strcpy(newlist.str,empty);
	newcount = 0;
	lnnewcount = 0;
	while (newcount <= (count / 2) + 1)
	{

		for (i = 0; i < 30; i++)
		{
			str1[i] = '\0';
			str2[i] = '\0';
		}

		//string1

		for (l = 0; l < oldlist.ln[newcount + 1] - oldlist.ln[newcount]; l++)
		{
			str1[l] = oldlist.str[k];
			k++;
		}
		printf("\nstr1-");
		puts(str1);

		//string2
		for (l = 0; l < oldlist.ln[newcount + 2] - oldlist.ln[newcount + 1]; l++)
		{
			str2[l] = oldlist.str[k];
			k++;
		}
		printf("str2-");
		puts(str2);

		if (str1[0] < str2[0])
		{
			strcat(newlist.str, str1);
			newlist.ln[lnnewcount + 1] = strlen(newlist.str);
			strcat(newlist.str, str2);
			newlist.ln[lnnewcount + 2] = strlen(newlist.str);
		}
		else
		{
			strcat(newlist.str, str2);
			newlist.ln[lnnewcount + 1] = strlen(newlist.str);
			strcat(newlist.str, str1);
			newlist.ln[lnnewcount + 2] = strlen(newlist.str);
		}

		newcount += 2;
		lnnewcount += 2;
	}

	printf("\n1\n");
	printf("new-");
	puts(newlist.str);
	printf("newarray-");
	for (i = 0; i <= count; i++)
	{
		printf("%d ", newlist.ln[i]);
	}

oldstring:
	count1++;
	puts(oldlist.str);
	for (i = 0; i < 300; i++)
	{
		oldlist.str[i] = '\0';
	}
	puts("\noldlist empty");
	puts(oldlist.str);

	k = 0;
	for (l = newlist.ln[0]; l < newlist.ln[1]; l++)
	{
		str1[k] = newlist.str[l];
		k++;
	}
	printf("\nstr1-");
	puts(str1);
	strcat(oldlist.str, str1);
	oldlist.ln[1] = strlen(oldlist.str);
	//strcpy(oldlist.str,empty);
	oldcount = 0;
	lnoldcount = 0;
	while (oldcount <= (count / 2) + 1)
	{

		for (i = 0; i < 30; i++)
		{
			str1[i] = '\0';
			str2[i] = '\0';
		}

		//string1
		k = 0;
		for (l = newlist.ln[oldcount + 1]; l < newlist.ln[oldcount + 2]; l++)
		{
			str1[k] = newlist.str[l];
			k++;
		}
		printf("\nstr1-");
		puts(str1);

		k = 0;
		//string2
		for (l = newlist.ln[oldcount + 2]; l < newlist.ln[oldcount + 3]; l++)
		{
			str2[k] = newlist.str[l];
			k++;
		}
		l = 0;
		printf("str2-");
		puts(str2);

		if (str1[0] < str2[0])
		{
			strcat(oldlist.str, str1);
			oldlist.ln[lnoldcount + 1] = strlen(oldlist.str);
			strcat(oldlist.str, str2);
			oldlist.ln[lnoldcount + 2] = strlen(oldlist.str);
		}
		else
		{
			strcat(oldlist.str, str2);
			oldlist.ln[lnoldcount + 1] = strlen(oldlist.str);
			strcat(oldlist.str, str1);
			oldlist.ln[lnoldcount + 2] = strlen(oldlist.str);
		}

		oldcount += 2;
		lnoldcount += 2;
	}

	printf("\n1\n");
	printf("old-");
	puts(oldlist.str);
	printf("Count-%d", count);
	printf("oldarray-");
	for (i = 0; i <= count; i++)
	{
		printf("%d ", oldlist.ln[i]);
	}
	puts(oldlist.str);

result:
	puts(oldlist.str);
	puts(newlist.str);
}