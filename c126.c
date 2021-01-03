 //Check string is palindrome or not (2)
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) SKNSCOE,Korti.*/
#include<stdio.h>
#include<string.h>
void main()
{
    char s1[30],s2[30];
    int x;
    printf("\nEnter The String (S1) : ");
    gets(s1);
      int i=strlen(s1)-1;
      int j=0;
    while( i !=-1)
    {
	s2[j]=s1[i];
	i--;
	j++;
}
    x=strcmp(s1,s2);
    printf("\nReverse String (S2) : %s",s2);
    if(x==0)
    {
        printf("\nHence %s is palindrome string ",s1);
    }
    else
    {
        printf("\nHence %s is not palindrome string",s2);
    }
}