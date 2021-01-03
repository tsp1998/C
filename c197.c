// Read File using fscanf function
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
	f=fopen("fscanf.txt","r");
	
	if(f==NULL)
	{
		printf("unable to open file");
		exit(1);
}
	printf(" file opened");
		
		fscanf(f,"%s%d",&str,&ch);
	
					printf("\nName:%s\tage:%d",str,ch);
	
		fclose(f);
		printf("\nData Read Successfully");
}