//Write Data to File Continuously with Line break as long as you want using strings
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) 
SKNSCOE,Korti.*/
#include<stdio.h>
	int i=0;
void main()
{
	char str[30];
		printf("\t\nEnter String to write to file:");
	gets(str);
FILE *f;
next:
	f=fopen("textinfstr.txt","w");
	fputs("\n",f);
	fclose(f);
f=fopen("textinf.txt","a");
//every time file written continuously
if(f==NULL){
	printf("\t\nFile not Present");
	exit(0);
}

else
printf("\t\nFile Present\n");
	fputs(str,f);
puts("Data Written Successfully\n\n");
fclose(f);


puts("1.next line\n2.Exit");
printf("Enter Choice:");
scanf("%d",&i);
if(i==1)
{
printf("\t\nEnter String to write to file:");
	gets(str);
	gets(str);
goto next;
}
else
puts("Data Written Successfully\n\n");
}