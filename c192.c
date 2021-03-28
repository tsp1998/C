//Write Data to File Continuously with Line break
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) 
SKNSCOE,Korti.*/
#include <stdio.h>
void main()
{
	char str[30];
	int i;
	printf("\t\nEnter String to write to file:");
	gets(str);
	FILE *f;
	f = fopen("texttemp.txt", "a");
	//every time file written continuously
	if (f == NULL)
	{
		printf("\t\nFile not Present");
		exit(0);
	}

	else
		printf("\t\nFile Present\n");

	for (i = 0; i < strlen(str); i++)
	{
		fputc(str[i], f);
	}
	puts("Data Written Successfully");
	fclose(f);
}