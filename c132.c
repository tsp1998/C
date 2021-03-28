//To demonstrate register storage class

#include <stdio.h>
void demoreg();
void main()
{
    register int x = 10;
    printf("\nX=%d", x);
    demoreg();
    demoreg();
}
void demoreg()
{
    register int x = 10;
    x = x + 2;
    printf("\nX=%d", x);
}