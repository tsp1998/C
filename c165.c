 //even Numbers using continue statement
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) SKNSCOE,Korti.*/
#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=100;i++)
    {
            if(i%2!=0)
            {
                continue;
            }         
            printf("\n%d",i);
    }
}