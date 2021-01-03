//Area of Square
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <stdio.h>
void main() 
{
int s,a=1,n,i;
printf("\nEnter the Number: ");
scanf("%d", &s);
printf("Enter the Power: ");
scanf("%d", &n);
for(i=0;i<n;i++)
a=a*s;
printf("\n%d^%d=%d\n", s,n,a);
main();
}