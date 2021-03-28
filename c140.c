//number tables with sing song
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void main()
{
    int j, n;
    printf("enter number of Number table:");
    scanf("%d", &n);
    for (j = 1; j <= 10; j++)
    {
        printf("%d\t%d's\t%d  \n", n, j, n * j);
    }
}