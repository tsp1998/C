//record ATM
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include<stdio.h>
#include<string.h>
int r,count=0,rid[100],rpin[100];
long int total,ftotal[100];
char acc,temp1[6],temp2[6],temp10[6],temp20[6],temp3[6],temp30[6];
void verify();//verify User
void reload();//read database
			char sid[3000],spin[4000],stotal[5000];
void record();//database
void password();//change password
void main()
{
	int i;
for(i=1;i<=100;i++)
{
rid[i]=rand()%1000;
rpin[i]=rand()%10000;
ftotal[i]=rand()%100000;
}
/*
for(i=1;i<=100;i++)
{
printf("%d.\n%d\n%d\n%ld\n",i,rid[i],rpin[i],ftotal[i]);
}*/
//record();
reload();
verify();
password();//change password
}

void record()
{
	FILE *p;
	 p=fopen("tsp.txt","w");
fputs(sid,p);
fputs(spin,p);
fputs(stotal,p);

fclose(p);
}

void reload()
{
	char c;
	int i=0,j=0,k=0,flag=0,flag1=0,flag2=0,check=1;
	FILE *p;
	 p=fopen("tsp.txt","r");
	 
	 for(;!feof(p);)
	{
			c=fgetc(p);
			switch(check)
			{
case 1:
	sid[i]=c;
		i++;
			if(c=='$')
	flag++;
	else
		flag=0;
		if(flag==2)
		check=2;
break;
case 2:
spin[j]=c;
		j++;
			if(c=='$')
	flag1++;
	else
		flag1=0;
			if(flag1==2)
		check=3;
break;
case 3:
	stotal[k]=c;
		k++;
			if(c=='$')
	flag2++;
	else
		flag2=0;
	}
}
stotal[k-1]='\0';
//printf("%d",strlen(stotal));
puts(sid);
puts(spin);
puts(stotal);

reid:
gets(temp1);
if(strlen(temp1)!=3){
	printf("invalid account number");
goto reid;
}
else
{
	i=0;
while(sid[i]!='\0')
{
	if(sid[i]==temp1[0]&& sid[i+1]==temp1[1]&& sid[i+2]==temp1[2])
{
flag=i-2;
acc=sid[flag];
goto FOUND;
}
i++;
}
printf("invalid account number");
goto reid;
}

FOUND:
check=1;
reswitch:
switch(check)
			{
case 1:
c=sid[flag];
i=0;
while(1)
{
	if(c==spin[i] && spin[i+1]=='.')
	{
	for(j=0;j<4;j++)
	{
	temp2[j]=spin[i+2];
	i++;
	}
	check=2;
	goto reswitch;
}	i++;
}
break;
case 2:
c=sid[flag];
i=0;
while(1)
{
	if(c==stotal[i] && stotal[i+1]=='.')
	{
	for(j=0;j<5;j++)
	{
	temp3[j]=stotal[i+2];
	i++;
	}
	break;
}	i++;
}
			}
puts(temp2);
puts(temp3);
//printf("\n%c",acc);
fclose(p);
}

void verify()
{
	int check;
		printf("Enter Your Account number(5 Digits):");
		while(1)
		{
		gets(temp10);
			check=strcmp(temp1,temp10);
	
			if(check==0)
		{
	printf("Enter Your Pin(4 Digits):");
	while(1)
	{
	gets(temp20);	
check=strcmp(temp2,temp20);
	if(check==0)
		{
			puts(temp3);
			return;
		}
		else
			printf("ReEnter Your Pin(4 Digits):");
	}
}
else
	printf("ReEnter Your Account number(5 Digits):");
		}
}

void password()
{
	int i=0,j;
		printf("Enter New Password");
		gets(temp20);
	while(1)
	{
	if(spin[i]==acc && spin[i+1]=='.')
	{
		puts("ok");
	for(j=0;j<4;j++)
	{
	spin[i+2]=temp20[j];
	i++;
}
break;
}
	i++;
}
puts(spin);
record();
}