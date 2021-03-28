//To solve equation using macro directive
#include <stdio.h>
#define F(X) 4 * X *X + 9 * X + X
void main()
{
    int x, y;
    printf("Enter The Value Of ‘X’ : ");
    scanf("%d", &x);
    y = F(X);
    printf("\nSolution : %d", y);
}