//Average of infinite Numbers
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void main()
{
	int i, c = 0;
	float a, b;
	printf("After Entering Numbers Enter 0 to Get Result:\n");
	printf("Enter Number:");
	scanf("%f", &a);
	for (i = 1; i >= 1; i++)
	{
		printf("Enter Next:");
		scanf("%f", &b);
		a = a + b;
		c++;
		if (b == 0)
		{
			a = a / c;
			printf("Average is=%f", a);
			break;
		}
	}
}