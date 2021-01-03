//Probability Chart
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) 
SKNSCOE,Korti.*/
#include<stdio.h>
void main()
{
float n,r,x[20],y[20],sx=0,sy=0,sx2=0,sy2,sxy=0;
int i,j,m=15,countX=0,countY;
x[0]=1;
y[0]=1;
printf("\nEnter Values of x & y:");
printf("\nEnter Values of x:");
for(i=1; i<=m; i++)
{
	if (x[i-1]==0)
			break;
scanf("%f",&x[i]);
sx+=x[i];
}

	countX=i-2;

printf("\nEnter Values of y:");
for(i=1; i<=m;i++)
{
	if (y[i-1]==0)
	break ;
scanf("%f",&y[i]);
sy+=y[i];
sx2+=x[i]*x[i];
sy2+=y[i]*y[i];
sxy+=x[i]*y[i];
};


printf("  x.       y.     x²      y²      xy");
for(i=1; i<=countX; i++)
{
	puts("");
for(j=1; j<=1; j++)
{
printf("%.4f\t%.4f\t%.4f\t%.4f\t%.4f",x[i],y[i],x[i]*x[i],y[i]*y[i],x[i]*y[i]);
}
}
printf("\n\nN=%d\n",countX);
printf("\nsx=%.4f",sx);
printf("\nsy=%.4f",sy);
printf("\nsx²=%.4f",sx2);
printf("\nsy²=%.4f",sy2);
printf("\nsxy=%.4f",sxy);
n=countX;
r=((sxy/n)-(sx/n)*(sy/n))/((sqrt((sx2/n)-pow((sx/n),2)))*(sqrt((sy2/n)-pow((sy/n),2))));

printf("\nr=%.4f",r);
}