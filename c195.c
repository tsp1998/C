// Write File using fprintf function
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <stdio.h>
void main()
{
	int ch;
	char str[30];
	FILE *f;
	f = fopen("fprintf.txt", "a");

	if (f == NULL)
	{
		printf("unable to create file");
		exit(1);
	}
	printf(" file created");
	printf("\nEnter Name:");
next:
	gets(str);
	fprintf(f, "%s", str);
	printf("1.next name\n2.next name with next line\n3.exit\nenter choice:");
	scanf("%d", &ch);
	if (ch == 1)
	{
		printf("\nEnter next Name:");
		gets(str);
		goto next;
	}
	if (ch == 2)
	{
		printf("\nEnter next Name:");
		fprintf(f, "\n");
		gets(str);
		goto next;
	}
	fclose(f);
	printf("Data written Successfully");
}