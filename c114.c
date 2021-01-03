//Display Contents Of Array by call by reference
 //Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void  array(int *a, int size);
void main()
{
	int i,x[5];
printf("\t Enter Contents:");
for(i=0; i<5; i++)
{
scanf("%d",&x[i]);
};
	array(x, 5);
}
void  array(int *a, int size)
{
	int i;
printf("\n\tArray:");
for(i=0; i<size; i++)
{
printf("\t%d",*a[i]);
}
}