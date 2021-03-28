//Program to Display %%%%% series & Structures
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
#include <stdlib.h>
void fl(char c); //actual %%%%% series
void swich();		 //switch structure
void fun();			 //Function Structure
void iff();			 // multiple if
void main()
{
	int ch;
	char x;
	printf("\t\tInfinite Series by TS");
	printf("\n1. Format Specifier Series\n2. Switch Structure \n3. Multiple If structure \n4. Function Structure");
	printf("\nEnter Choice:");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1:
		fl(x);
		break;
	case 2:
		swich(); //switch structure
		break;
	case 3:
		iff(); // multiple if
		break;
	case 4:
		fun(); //Function Structure
		break;
	}
}
void fl(char c) //actual %%%%% series
{
	char x, a = '%';
	int i, n;
	printf("\nEnter any Character Format Specifier:");
	scanf("%c", &x);
	scanf("%c", &x);
	printf("\nEnter Position:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("%c%c", a, c);
	}
}
void swich() //switch structure
{
	int i, a, n;
	printf("\nswitch (ch)\n{\ncase n:\n\nbreak;\ndefault:\n\nbreak;\nexit (0);\n}");
	printf("\n How Much Cases You Want:");
	scanf("%d", &n);
	printf("\nswitch (ch)\n{");
	for (i = 0; i < n; i++)
	{
		printf("\ncase %d:", i + 1);
		printf("\n\nbreak;");
	};
	printf("\ndefault:\n\nbreak;\nexit (0);\n}");
}
void iff() // multiple if
{
	int i, n;
	printf("\nif\n{\n\n}");
	printf("\n How Much Cases You Want:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("\nif\n{\n\n}");
	};
}
void fun() //Function Structure
{
	int i, n;
	printf("\nvoid \n{\n\n}");
	printf("\n How Much Cases You Want:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("\nvoid \n{\n\n}");
	};
}