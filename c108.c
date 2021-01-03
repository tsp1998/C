/*Derivative of Polynomial Function*/
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) SKNSCOE,Korti.*/
#include<stdio.h>
void main ()
{
	int f[1000],o,i,j,g[1000],h[1000],k;
	printf("Enter the order of the polynomial:");
	scanf("%d", &o);
	for(i =o; i >= 0; --i)
	{
        printf("Enter the co-efficient of x^%d:", i);
        scanf("%d", &f[i]);
	}
	    		printf("Your Function is:\nF=");
    	for(i =o; i >= 0; --i)
    	{
    		printf("%dx^%d+",f[i],i);
    	}
    		g[o]=o;
    		 	for(i =o; i >= 0; --i)
    	{
    	g[i-1]=i-1;
    	}
    	printf("\nDerivative is:\nF'=");
    		for(i =o; i > 0; --i)
    	{
    		printf("%dx^%d+",g[i]*f[i],i-1);
    	}
}