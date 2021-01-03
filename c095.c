//Check your Character is Vowel or Consonent by Call by Address (Reference)
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void voco(char *tsp);
void main()
{
	char y;
	printf("\n\tEnter your Character=");
scanf("%c", &y);
	voco(&y);
}
void voco(char *tsp)
{
if(*tsp=='a' || *tsp=='e' || *tsp=='i' || *tsp=='o' || *tsp=='u' || *tsp=='A' || *tsp=='E' || *tsp=='I' || *tsp=='O' || *tsp=='U')
{
printf("\n\tYour Character is Vowel");
}
else
printf("\n\tYour Character is Consonent");
}
