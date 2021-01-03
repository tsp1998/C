//To calculate area of circle using macro directive
 
#include<stdio.h>
#define PI 3.141593
void main()
{
    float r,area;
    printf("Enter The radius of Circle : ");
    scanf("%f",&r);
    area=PI*r*r;
    printf("\nArea of Circle : %f",area);
}