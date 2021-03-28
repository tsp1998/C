/*Infinity*/
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <stdio.h>
char str[10] = {'\0'};
void its(int t); //integer to string
void main()
{
	FILE *w, *r;
	int i, n, len, j, count, flag = 0;
	char c, *total, str1[10] = {'\0'}, store[10] = {'\0'};
	its(10);
	puts(str);
	printf("how many files:");
	gets(str);
	strcpy(store, str);
	n = atoi(str);
	len = strlen(store);

	for (j = 0; j < 10; j++)
		str1[j] = '\0';
	str1[0] = 'c';
	for (j = 1; j <= len; j++)
		str1[j] = '0';
	strcat(str1, ".c");

	for (i = 1; i <= n; i++)
	{
		its(i);
		for (j = strlen(str) - 1; j >= 0; j--)
		{
			str1[len] = str[j];
			len--;
		}
		len = strlen(store);
		w = fopen(str1, "w");
		if (flag == 0)
		{
			while (1)
			{
				if (feof(r))
					break;
				r = fopen("_sample.c", "r");
				c = fgetc(r);
				//	fputc(c,w);
				count++;
			}
			fclose(r);
			total = (char *)calloc(count, sizeof(char));
			j = 0;
			while (1)
			{
				if (feof(r))
					break;
				r = fopen("a.c", "r");
				c = fgetc(r);
				total[j] = c;
				j++;
			}
			puts(total);
			getchar();
		} /*
			while(1){
			if(feof(r))
		break;
		c=fgetc(r);
		fputc(c,w);
		}*/
		fclose(w);
		fclose(r);
	}
	puts("Okay Done");
}

void its(int t) //integer to string
{
	char temp[10];
	int i = 0, j, rem, div;
	for (i = 0; i < 10; i++)
	{
		str[i] = '\0';
		temp[i] = '\0';
	}
	i = 0;
	while (t != 0)
	{
		rem = t % 10;				 // return reminder
		temp[i] = '0' + rem; //connect reminder
		t = t / 10;
		i++;
	}
	j = strlen(temp) - 1; //length of string
	for (i = 0; i < strlen(temp); i++)
	{
		str[i] = temp[j]; // reverse string
		j--;
	}
	str[i] = '\0'; //close the string
}
