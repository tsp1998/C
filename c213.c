//reverse the string
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <stdio.h>
void rev(char str[]);
void main() 
{
	char str[100]="shubham";
	rev(str);
	puts(str);
}
void rev(char str[]) 
{
int i;
char c;
for(i=0;i<strlen(str)/2;i++){
	c=str[i];
		str[i]=str[strlen(str)-1-i];
		str[strlen(str)-1-i]=c;
		}
}
