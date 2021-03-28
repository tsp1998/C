//sorting of numbers in ascending/descending order & calculator
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) SKNSCOE,Korti.*/
#include <stdio.h>
void main()
{
    int k, i, j;
    float a[100], d[100], sum = 0, sub = 0, prod = 0, div = 0, temp;
    printf("Enter numbers & enter 0 to see result");
    printf("\nEnter number %d:", 1);
    scanf("%f", &a[0]);
    d[0] = a[0];
    sum = a[0];
    sub = a[0];
    prod = a[0];
    div = a[0];
    for (k = 1; k >= 1; k++)
    {
        printf("\nEnter number %d:", k + 1);
        scanf("%f", &a[k]);
        d[k] = a[k];
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
            for (i = 0; i < k; i++)
            {
                for (j = 0; j < k; j++)
                {
                    if (d[j] < d[j + 1])
                    {
                        temp = d[j + 1];
                        d[j + 1] = d[j];
                        d[j] = temp;
                    }
                }
            }
            printf("\n\nLargest Number=%f", d[0]);
            printf("\nSmallest Number except 0 =%f\n", a[1]);
            d[k - 1] = a[1];
            printf("\n\nAddition = %f", sum);
            printf("\nSubtraction = %f", sub);
            printf("\nMultiplication = %f", prod);
            printf("\nDivision = %f", div);
            printf("\n\nNumbers In Ascending Order:");
            for (i = 0; i <= k; i++)
            {
                printf("\n%f", a[i]);
            }
            printf("\nNumbers In Descending Order:");
            for (i = 0; i <= k; i++)
            {
                printf("\n%f", d[i]);
            }
            exit(0);
        }
        sum += a[k];
        sub -= a[k];
        prod *= a[k];
        div /= a[k];
    }
}