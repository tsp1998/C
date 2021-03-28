//Display Name by String
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	int n, ch;
	char tsp[10], ts[10];
	printf("\n\tEnter Name:");
	scanf("%s", &tsp);
	printf("\n\tName=%s", tsp);
	printf("\n1.Length of String \n2.");
	printf("\n\tEnter  your choice:");
	scanf("%s", &ch);
	switch (ch)
	{
	case 1:
		n = strlen(tsp);
		printf("\n\t String Length=%d", n);
		break;
	case 2:
		printf("\n\t%s", strupr(tsp));
		break;
		break;
		exit(0);
	}
}