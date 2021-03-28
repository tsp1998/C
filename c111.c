//Percentage of Subjects
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void main()
{
	float b, sum = 0;
	int i, c = 0;
	printf("\nEnter marks of five Subjects:");
	scanf("%f", &b);
	for (i = 1; i >= 1; i++)
	{
		sum = sum + b;
		c++;
		printf("Enter Next SUBJECT marks:");
		scanf("%f", &b);
		if (b == 0)
		{
			printf("\n\tTHE SUMATION IS %f", sum);
			sum = sum / c;
			printf("\n\tPercentage of Five Subjects %f", sum);
			exit(0);
		}
	}
}