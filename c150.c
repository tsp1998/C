//record record
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include<stdio.h>
#include<string.h>
void main()
{
	int i,p,k,j,m,cmp,n,l;
	char result0[1]="0";
	struct record
	{
		int length,array[100];
		float farray[100];
			char small[300];
			char total[30000];
};
struct record record;
struct record name;
struct record branch;
struct record roll;
struct record marks;
	name.array[0]=0;
	branch.array[0]=0;
	printf("enter 0 to see output\n");
			for(i=0;i>=0;i++)
		{
				p=i;
				printf("enter record number:");
	scanf("%d",&record.array[i]);
	if(record.array[i]==0)
{
goto result;
}
		printf("enter Name:");
			gets(name.small);
			gets(name.small);
			cmp=strcmp(name.small,result0);
				if(cmp==0)
{
goto result;
}
				printf("enter roll number:");
	scanf("%d",&roll.array[i]);
	if(roll.array[i]==0)
{
goto result;
}
		printf("enter branch Name:");
			gets(branch.small);
			gets(branch.small);
			cmp=strcmp(branch.small,result0);
		if(cmp==0)
{
goto result;
}
		printf("enter marks:");
	scanf("%f",&marks.farray[i]);
		if(marks.farray[i]==0)
{
goto result;
}
		name.length=strlen(name.small);
	
		k=0;
		for(j=name.array[i];j<name.length+name.array[i];j++)
		{
	name.total[j]=name.small[k];
	k++;
}
	name.array[i+1]=strlen(name.total);
		branch.length=strlen(branch.small);
		m=0;
		for(n=branch.array[p];n<branch.length+branch.array[p];n++)
		{
	branch.total[n]=branch.small[m];
	m++;
}
	branch.array[p+1]=strlen(branch.total);
}
result:
	for(l=0;l<i;l++)
		{
			p=l;
				printf("\nRecord %d",record.array[l]);
			printf("\nroll number-%d",roll.array[p]);
	printf("\nname-");
		for(j=name.array[l];j<name.array[l+1];j++)
		{	
		printf("%c",name.total[j]);
		}
				printf("\nbranch-");
					for(m=branch.array[p];m<branch.array[p+1];m++)
		{	
		printf("%c",branch.total[m]);
		}
    printf("\nmarks-%f",marks.farray[l]);
    	printf("\n");
}
exit(0);
}