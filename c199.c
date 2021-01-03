// Read File using fgets function
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include<stdio.h>
void main()
{
	int ch;
	char str[30];
	FILE *f;
	f=fopen("fgets.txt","r");
	
	if(f==NULL)
	{
		printf("unable to open file");
		exit(1);
}
	printf(" file opened\n");
		
		for(;!feof(f);)
		{
	
		fgets(str,15,f);
		
		printf("%s",str);
}

	
		fclose(f);
		printf("\nData Read Successfully");
}