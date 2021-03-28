//To demonstrate automatic storage class
#include <stdio.h>
void demoauto();
void main()
{
    int x = 10;
    printf("\nX=%d", x);
    demoauto();
}
void demoauto()
{
    int x = 20;
    printf("\nX=%d", x);
}