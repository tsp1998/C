//Display Table of Roll Numbers and Marks
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void main()
{
    int a[2][5], i, j;
    printf("Enter Roll Numbers:");
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter Marks:");
    for (i = 1; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n Roll Numbers:\t");
    for (i = 0; i < 1; i++)
    {
        printf("\t");
        for (j = 0; j < 5; j++)
        {
            printf(" %d\t", a[i][j]);
        }
    }
    printf("\n Marks:\t\t");
    for (i = 1; i < 2; i++)
    {
        printf("\t");
        for (j = 0; j < 5; j++)
        {
            printf(" %d\t", a[i][j]);
        }
    }
}