//alphabets with number for mind tests
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void main()
{
	int i;
	char c, ch;
	for (i = 1, ch = 'A', c = 'a'; i <= 26, ch <= 'Z', c <= 'z'; i++, c++, ch++)
	{
		printf("%d\t%c\t%c\n", i, ch, c);
	}
}