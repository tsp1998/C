//Addition,Subtraction,Multiplication and Division of Infinite Numbers
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void infsum();
void infsub();
void divinf();
void prodinf();
void main()
{
	int i, ch;
	for (i = 1; i >= 1; i++)
	{
		printf("\n0.About Programmer \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit");
		printf("\nEnter Your Choice:");
		scanf("%d", &ch);
		if (ch == 0)
		{
			printf("\nTandale Shubham Parmeshwar\nE36\nF.E.(Mech.)\nSKNSCOE,Korti.");
			printf("\n");
		}
		if (ch == 1)
		{
			infsum();
		}
		if (ch == 2)
		{
			infsub();
		}
		if (ch == 3)
		{
			prodinf();
		}
		if (ch == 4)
		{
			divinf();
		}
		if (ch == 5)
		{
			exit(0);
		}
	}
}
void infsum()
{
	float a, i, sum, b;
	printf("After Entering Numbers Enter 0 to Get Result:\n");
	printf("\nEnter Number:");
	scanf("%f", &a);
	sum = a;

	for (i = 1; i >= 1; i++)
	{
		printf("Enter Next:");
		scanf("%f", &b);
		sum = sum + b;

		if (b == 0)
		{
			printf("\nsum:%f", sum);

			printf("\n");
			main();
		}
	}
}
void infsub()
{
	float a, i, b, sub;
	printf("After Entering Numbers Enter 0 to Get Result:\n");
	printf("\nEnter Number:");
	scanf("%f", &a);

	sub = a;
	for (i = 1; i >= 1; i++)
	{
		printf("Enter Next:");
		scanf("%f", &b);

		sub = sub - b;
		if (b == 0)
		{

			printf("\nsub:%f", sub);
			printf("\n");
			main();
		}
	}
}
void prodinf()
{
	float a, i, b, prod;
	printf("After Entering Numbers Enter 1.0 to Get Result:\n");
	printf("Enter Number:");
	scanf("%f", &a);
	prod = a;

	for (i = 1; i >= 1; i++)
	{
		printf("Enter Next:");
		scanf("%f", &b);
		prod = prod * b;

		if (b == 1.0)
		{
			printf("\nprod:%f", prod);

			printf("\n");
			main();
		}
	}
}
void divinf()
{
	float a, i, b, div;
	printf("After Entering Numbers Enter 1.0 to Get Result:\n");
	printf("Enter Number:");
	scanf("%f", &a);
	div = a;
	for (i = 1; i >= 1; i++)
	{
		printf("Enter Next:");
		scanf("%f", &b);

		div = div / b;

		if (b == 1.0)
		{

			printf("\ndiv:%f", div);
			printf("\n");
			main();
		}
	}
}