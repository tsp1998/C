//Program to Perform Addition,Subtraction,Multiplication and Division by Call by Address (Reference)
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
#include <stdlib.h>
void art(float *t, float *s);
void main()
{
	float x, y;
	printf("\nEnter Two numbers:");
	scanf("%f%f", &x, &y);
	art(&x, &y);
}
void art(float *t, float *s)
{
	float p;
	int ch;
	printf("\n\t1.Addition\n\t2.Subtraction\n\t3.Multiplication\n\t4.Division");
	printf("\n\tenter your Choice=");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1:
		p = *t + *s;
		printf("\n\tAddition of Numbers=%f", p);
		break;
	case 2:
		p = *t - *s;
		printf("\n\tSubtraction of Numbers=%f", p);
		break;
	case 3:
		p = *t * *s;
		printf("\n\tMultiplication of Numbers=%f", p);
		break;
	case 4:
		p = *t / (*s);
		printf("\n\tDivision of Numbers=%f", p);
		break;
	default:
		printf("\n\tSorry Your Choice is Invalid");
		exit(0);
		break;
	}
}