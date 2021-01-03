//Armstrong Series
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
date:20-01-2018
*/
#include <stdio.h>
#include <conio.h>
#include <tsp.h>
main() {
	char str[10]={'\0'};
	int i1,i2,l=0;
	register long int i=1,j,k[10],sum=0,temp,start,end;
	printf("Enter Starting Number:");
	scanf("%d",&start);
	printf("Enter Ending Number:");
	scanf("%d",&end);
	i=start;
while(i<=end){
	its(str,i);
	l=0;
	sum=0;
	j=i;
	
	while(j!=0) {
k[l]=j%10;
j/=10;
l++;
}

for(i1=0;i1<strlen(str);i1++){
	temp=1;
for(i2=0;i2<strlen(str);i2++){
temp*=k[i1];
}
sum+=temp;
}

if(i==sum)
printf("%d\n",sum);
i++;
}
printf("bye");
}