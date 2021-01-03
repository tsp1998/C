//Check Wheather the Number is even & odd by Call by  Address (Reference)
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void evod(int *a);
void main()
{
		int y;
	printf("\nEnter number:");
scanf("%d",&y);
	evod(&y);
}
void evod(int *a)
{
if (*a%2==0)
{
printf("\n\tYour Number is even");
}
else
{
printf("\n\tYour Number is odd");
}
}