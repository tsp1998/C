// Read File using fgetc function
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int ch;
	char c;
	FILE *f;
	f=fopen("c:\\tsp\\fgetc.txt","r");
	
	if(f==NULL)
	{
		printf("unable to open file");
		exit(0);
}
	printf(" file opened\n");
	
	for(;!feof(f);)
	{
		c=fgetc(f);
	printf("%c",c);
}

		fclose(f);
		getch();
		printf("\nData read Successfully");
}