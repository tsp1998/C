//Largest Number or Smallest Number from Infinite Numbers
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
	float a, b, c, d;
	int i;
	printf("After Entering Numbers Enter 0.0 to Get Result:");
	printf("\nEnter Number:");
	scanf("%f", &a);
	c = a;
	for (i = 1; i >= 1; i++)
	{
		printf("Enter Next:");
		scanf("%f", &b);
		d = b;
		if (b > a)
		{
			a = b;
		}
		if (b == 0.0)
		{
			printf("Largest Number is:%f", a);
		}
		if (b == 0.0)
		{
			printf("\nSmallest Number is:%f", c);
			exit(0);
		}
		if (d < c)
		{
			c = d;
		}
	}
}