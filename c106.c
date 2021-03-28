/*All Types Series*/
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) SKNSCOE,Korti.*/
#include <stdio.h>
#include <stdlib.h>
int prime(int n); //prime number
void ser();       //series all types
void main()
{
    ser(); //series all types
}
void ser() //series all types
{
    int i, a, ch, n;
    printf("\n\tenter first Number=");
    scanf("%d", &a);
    printf("\n\tenter last Number=");
    scanf("%d", &n);
    if (a == -a && n == -n && a < n)
    {
        n == a;
        a == n;
    }
    for (i = 1; i >= 1; i++)
    {
        printf("Orders:\n\t1.Ascending\n\t2.Descending\n\t3.Even Numbers\n\t4.Odd Numbers\n5.prime numbers");
        printf("\n\tenter your Choice=");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            for (i = a; i <= n; i++)
            {
                printf("%d,", i);
            }
            break;
        case 2:
            for (i = n; i >= a; i--)
            {
                printf("%d,", i);
            }
            break;
        case 3:
            for (i = a; i <= n; i++)
            {
                if (i % 2 == 0)
                {
                    printf("%d,", i);
                }
            }
            break;
        case 4:
            for (i = a; i <= n; i++)
            {
                if (i % 2 != 0)
                {
                    printf("%d,", i);
                }
            }
            break;
            int x, total;
        case 5:
            total = 0;
            for (i = a; i <= n; i++)
            {
                if (i != 1)
                {
                    x = prime(i); //prime number
                }
                if (x == 1)
                {
                    total++;
                    printf("\n%d)", total);
                }
            }
            break;
        default:
            printf("\n\tSorry Your Choice is Invalid");
            exit(0);
            break;
        }
        printf("\n");
    }
}
int prime(int n) //prime number
{
    int i, c = 0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 0)
    {
        printf("\n%d", n);
        return 1;
    }
}