//Pass Array to function
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include<stdio.h>
void array(int y[],int size){//definition is before main fn so fn declaration is not needed
	int i;
	printf("\n\tArray:");
for(i=1; i<=size; i++)
{
printf("\t%d",y[i]);
}
}

void main()
{
int i,size,x[100];
printf("\t Enter Size of Array:");
scanf("%d",&size);
printf("\t Enter Contents:");
for(i=1; i<=size; i++)
{
scanf("%d",&x[i]);
};
array(x,size);
}
