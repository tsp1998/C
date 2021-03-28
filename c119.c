//Check divisibility
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) SKNSCOE,Korti.*/
#include <stdio.h>
void main()
{
    int n, div;
    printf("\nEnter The Number : ");
    scanf("%d", &n);
    printf("\nEnter The Divisor : ");
    scanf("%d", &div);
    if (n % div == 0)
    {
        printf("\n%d is completely divisible by %d", n, div);
    }
    else
    {
        printf("\n%d is not completely divisible by %d", n, div);
    }
}
