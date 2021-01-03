/*Derivative & integration of Polynomial Function*/
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) SKNSCOE,Korti.*/
#include<stdio.h>
void polyint();//Derivative of polynomial Function
void main ()
{
 polyint();//Derivative of polynomial Function
}
void polyint()//Derivative of polynomial Function
{
	int f[1000],o,i,ch,g[1000];
	printf("Enter the order of the polynomial:");
	scanf("%d", &o);
	for(i =o; i >= 0; --i)
	{
        printf("Enter the co-efficient of x^%d:", i);
        scanf("%d", &f[i]);
	}
	    		printf("Your Function is:\nF=");
    	for(i =o; i >0; --i)
    	{
    		printf("%dx^%d+",f[i],i);
    	}
    	printf("%dx^0",f[i]);
    		g[o]=o;
    		 	for(i =o; i >= 0; --i)
    	{
    	g[i+1]=i+1;
    	}
    	printf("\nIntegration is:\nF'=");
    		for(i =o; i >0; --i)
    	{
    		printf("(%d/%d)x^%d+",f[i],g[i+1],i+1);
    	}
    	printf("(%d/1)x^1",f[i]);
}