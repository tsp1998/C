//Check your Character is Vowel or Consonent
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include<stdio.h>
void main()
{
char tsp;
printf("\n\tEnter your Character=");
scanf("%c", &tsp);
if(tsp=='a' || tsp=='e' || tsp=='i' || tsp=='o' || tsp=='u' || tsp=='A' || tsp=='E' || tsp=='I' || tsp=='O' || tsp=='U')
{
printf("\n\tYour Character is Vowel");
}
else
printf("\n\tYour Character is Consonent");
}