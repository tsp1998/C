#include <stdio.h>
#include <conio.h>
void main()
{
	//<string>string</string>
	//<br /> all of that type
	char ch;
	char tag[20];
	FILE *fp;
	while (1)
	{
		if (fp == NULL)
			exit(0);
		printf("\n1.tag\n2.Break tag\n3.exit");
		ch = getch();
		fp = fopen("tsp!.txt", "w");
		switch (ch)
		{
		case '1':
			printf("\nEnter Tag name:");
			gets(tag);
			fprintf(fp, "<");
			fprintf(fp, "%s", tag);
			fprintf(fp, ">");
			fprintf(fp, "%s", tag);
			fprintf(fp, "</");
			fprintf(fp, "%s", tag);
			fprintf(fp, ">");
			break;

		case '2':
			printf("</ br>");
			fprintf(fp, "</ br>");
			fputs("</ br>", fp);
			break;
		case '3':
			break;
		}
		fclose(fp);
	}
}