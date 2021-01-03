//addition of numbers using GoTo statement/keyword
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) SKNSCOE,Korti.*/
#include<stdio.h>
void main()
{
	int i=2;
    float no,sum,sub,prod,div;
       printf("Enter numbers & enter 0 to see result");
      printf("\nEnter number %d:",1);
     scanf("%f",&no);
      sum=no;
sub=no; 
prod=no; 
div=no; 
    addition:
         printf("\nEnter number %d:",i);
         i++;
prod*=no; 
div/=no; 
        scanf("%f",&no);
         sum+=no;
        sub-=no; 
        if(no!=0)
        {
            goto addition;
        }   
        printf("\naddition=%f",sum);
          printf("\nSubtraction = %f",sub);
    printf("\nMultiplication = %f",prod);
    printf("\nDivision = %f",div);
}