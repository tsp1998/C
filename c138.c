//Prime sum of prime numbers
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include<stdio.h>

void main()
{
	int sum=0,i,n,fn,ln;
	
		printf("Enter First Prime number:");
	scanf("%d",&fn);
		printf("Enter Last Prime number:");
	scanf("%d",&ln);
for(i=fn;i<=ln;)
{
	if(i==1)
	goto increment;
	for(n=2;n<=i/2;n++)
{
	if(i%n==0)
	goto increment;
}
	sum+=i;
	
	increment:
	i++;
}
	printf("prime sum=%d\n",sum);
}