//To demonstrate static storage class
#include <stdio.h>
void demostatic();
void main()
{
    demostatic();
    demostatic();
    demostatic();
}
void demostatic()
{
    static x = 10;
    x = x + 2;
    printf("\nX=%d", x);
}