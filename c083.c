//Addition and Subtraction of Infinite Numbers
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void inf();
void main()
{
	inf();
}
void inf()
{
	float a, i, sum, b, sub;
	printf("After Entering Numbers Enter 0 to Get Result:");
	printf("\nEnter Number:");
	scanf("%f", &a);
	sum = a;
	sub = a;
	for (i = 1; i >= 1; i++)
	{
		printf("Enter Next:");
		scanf("%f", &b);
		sum = sum + b;
		sub = sub - b;
		if (b == 0)
		{
			printf("\nsum:%f", sum);
			printf("\nsub:%f", sub);
			exit(0);
		}
	}
}