//number is Prime or not
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void main()
{
int i,no;
int prime=1;
printf("Enter the Number:");
scanf("%d",&no);
Continue:
for(i=2;i<=no/2;i++)
{
if (no%i==0)
{
prime=0;
}
};
if (prime==1)
{
	printf("Number is Prime");
}
else
{
		printf("Number is not Prime");
}
printf("\n\nEnter next Number or enter 0 to stop:");
scanf("%d",&no);
if(no==0)
{
	exit(0);
}
prime=1;
goto Continue;
}