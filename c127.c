// factorial of number using return statement
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
int factorial(int);
void main()
{
    int x, t;
    printf("\nEnter The Number : ");
    scanf("%d", &x);
    t = factorial(x);
    printf("\n%d! = %d", x, t);
}
int factorial(int n)
{
    int f;
    if (n == 1)
    {
        return 1;
    }
    else
    {
        f = n * factorial(n - 1);
    }
    return f;
}
