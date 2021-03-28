//Prime sum of prime numbers upto 20
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <stdio.h>

void main()
{
	int sum = 0, i, n;
	for (i = 2; i <= 20;)
	{
		for (n = 2; n <= i / 2; n++)
		{
			if (i % n == 0)
				goto increment;
		}
		sum += i;

	increment:
		i++;
	}
	printf("prime sum=%d\n", sum);
}