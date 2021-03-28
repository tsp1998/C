//Display Addition Of Matrix
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void main()
{
    int a[3][3], b[3][3], c[3][3], i, j;
    printf("Enter Content of First Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Element%d,%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter Content of Second Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Element%d,%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("\nSubtraction:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            if (i == 1 && j == 2)
            {
                printf(" %d - ", a[i][j]);
                goto b;
            }
            printf(" %d ", a[i][j]);
            if (j == 2)
            {
                printf("  ", a[i][j]);
            }
        }

    b:
        for (j = 0; j < 3; j++)
        {
            if (i == 1 && j == 2)
            {
                printf(" %d = ", b[i][j]);
                goto c;
            }

            printf(" %d ", b[i][j]);
            if (j == 2)
            {
                printf("  ", a[i][j]);
            }
        }

    c:
        for (j = 0; j < 3; j++)
        {
            printf(" %d ", c[i][j]);
        }
    }
}