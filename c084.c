//Multiplication and Division of Infinite Numbers
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void inf();
void main ()
{
	inf();
}
void inf()
{
	float a,i,b,prod,div;
		printf ("After Entering Numbers Enter 1.0 to Get Result:\n");
	printf ("Enter Number:");
	scanf ("%f",&a);
	prod=a;
	div=a;
	for (i=1;i>=1;i++)
	{
		printf ("Enter Next:");
	scanf ("%f",&b);
	prod=prod*b;
	div=div/b;
	i++;
		if(b==1.0)
	{	
		printf ("\nprod:%f",prod);
		printf ("\ndiv:%f", div);
		exit (0);
	}
	}
}