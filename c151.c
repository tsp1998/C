//reverse the string
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
email-tsp@outlook.in
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void rev(char str1[]);
void main()
{
 char str[10];
 gets(str);
rev(str);
}
void rev(char str1[])
{
	int i;
	char str2[2];
for( i=strlen(str1)-1;i>=0;i--)
{
printf("%c",str1[i]);
}

}