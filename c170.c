//pyramid of desired size with any character
/*
Tandale Shubham Parmeshwar
SKNSCOE,Korti
tsp@outlook.in
*/
#include<stdio.h>
int pyramid(int,char);
void main()
{
	int row;
	char ch;
	printf("Enter character of Pyramid:");
	scanf("%c",&ch);
	printf("Enter size of Pyramid (size of rows):");
	scanf("%d",&row);
	pyramid(row,ch);
}
int pyramid(int row,char ch)
{
int i,j,k;
for (i=1;i<=row;i++)
{
for (j=row;j>=i;j--)
{
  printf (" ");
}
for (k=1;k<=2*i-1;k++)
{
   printf("%c",ch);
}

    printf("\n");
}
    return 0;
}