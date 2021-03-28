//Check string is palindrome or not
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) SKNSCOE,Korti.*/
#include <stdio.h>
#include <string.h>
void main()
{
    char s1[30];
    int x, y;
    printf("\nEnter The String (S1) : ");
    gets(s1);
    printf("\nReverse String :");
    for (y = strlen(s1); y >= 0; y--)
        printf("%c", s1[y]);
    for (x = 0, y = strlen(s1); y >= 0, x < strlen(s1); x++, y--)
    {
        if (s1[x] != s1[y])
        {
            printf("\nHence %s is not palindrome string ", s1);
            exit(0);
        }
    }
    printf("\nHence %s is palindrome string", s1);
}