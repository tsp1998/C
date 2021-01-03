 //continue statement
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) SKNSCOE,Korti.*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            if(i!=j)
            {
                continue;
            }         
            printf("\n%d %d",i,j);
        }
    }
}