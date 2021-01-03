//To demonstrate external/global storage class
 
#include<stdio.h>
int x=10;
void demoglobal();
void main()
{
    demoglobal();
    x=x+1;
    printf("\nX=%d",x);
    demoglobal();
}
void demoglobal()
{
    x=x+1;
    printf("\nX=%d",x);
} 