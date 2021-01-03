//Integer to String
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti.
Email-tsp@outlook.in
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int flag;
		void main(int t)
{
char bal[10],temp[10];
	int i=0,j,rem,div;
t=500;
for(i=0;i<10;i++)
		{
		bal[i]='\0';
		temp[i]='\0';
	}
i=0;
	while(t!=0)
	{
		rem=t%10;
		
		temp[i]='0'+rem;
		printf("\nletter%d=%c",i,temp[i]);
		t=t/10;
		i++;
	}puts("");
		puts(temp);
			
		printf("length=%d\n",strlen(temp));
//temp[i+3]='\0';
	j=strlen(temp)-1;
	for(i=0;i<strlen(temp);i++)
		{
		bal[i]=temp[j];
		printf("\nletter%d=%c",i,bal[i]);
		j--;
	}
	bal[i]='\0';	printf("\nletter%d=%c\n",i,bal[i]);
	flag=1;
	if(flag==1)
	{
		printf("\nYour Balance is:");
	puts(bal);
	}
	
	if(flag==2)
	//	outtextxy(100,100,bal);
		printf("Thank You");
		getch();
		exit(0);
	}