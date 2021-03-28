//sorting of numbers in ascending order
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) SKNSCOE,Korti.*/
#include <stdio.h>
void main()
{
    int k, i, j;
    float a[100], temp;
    printf("Enter number & enter 0 to see result");
    for (k = 0; k >= 0; k++)
    {
        printf("\nEnter number %d:", k);
        scanf("%f", &a[k]);
        if (a[k] == 0)
        {
            for (i = 0; i < k; i++)
            {
                for (j = 0; j < k; j++)
                {
                    if (a[j] > a[j + 1])
                    {
                        temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                }
            }
            printf("\nNumbers In Ascending Order:");
            for (i = 0; i <= k; i++)
            {
                printf("\n%f", a[i]);
            }
            exit(0);
        }
    }
}