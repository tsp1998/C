//Occurrence of digit in number
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) SKNSCOE,Korti.*/
#include <stdio.h>
void main()
{
    int n, r, s, c = 0;
    printf("\nEnter the Numbers : ");
    scanf("%d", &n);
    printf("\nEnter the Digit to Count : ");
    scanf("%d", &s);
    while (n != 0)
    {
        r = n % 10;
        if (r == s)
        {
            c++;
        }
        n = n / 10;
    }
    printf("\n%d Occurs %d times", s, c);
}