 //total characters in string
#include<stdio.h>
void main()
{
    char str[300],str1[300]; 
    int k, j,i=0,c=0;
    printf("\nEnter The String : ");
    gets(str);
    strcpy(str1,str);
    check:
    for(j=0;j>=0;j++)
    {
    if(str[j]!=' ')
    {
        c++;
        i++;
    }
     if(str[j]==' ')
    {
        goto print;
    }
    }
    print:
    for(k=0;k<=c;k++)
    {
	printf("%c",str[k]);
}
for(j=0;j>=0;j++)
    {	i++;
    	str1[j]=str[i];
    
    }
for(k=0;k<=c;k++)
    {
	printf("%c",str1[k]);
}
i++;
  printf("\nTotal characters in string : %d ",c);
}