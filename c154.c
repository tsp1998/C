//3 Dimensional Array (3D)
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define S 5
#include<string.h>
int pi(int);
int si();
float pf(float);
float sf();
char sc();
void p(char str[]);
char pc(char);
int ssi(char str[]);
int psi(char str[],int);
float psf(char str[],float);
char psc(char str[],char p);
void main()
{

	int i,j,k;
int a[3][4][2];
	p("Welcome To My World\n\t");
for(i=0;i<3;i++)
{
	for(j=0;j<4;j++)
{
	for(k=0;k<1;k++)
{
	a[i][j][k]=si();
}
}
}

for(i=0;i<3;i++)
{
	p("\n");
	for(j=0;j<4;j++)
{
		p("\t");
	for(k=0;k<1;k++)
{
	pi(a[i][j][k]);
}
}
}

for(i=0;i<3;i++)
{
	for(j=0;j<4;j++)
{
	for(k=1;k<=1;k++)
{
	a[i][j][k]=si();
}
}
}

for(i=0;i<3;i++)
{
	p("\n");
	for(j=0;j<4;j++)
{
		p("\t");
	for(k=1;k<=1;k++)
{
	pi(a[i][j][k]);
}
}
}

for(i=0;i<3;i++)
{
	p("\n");
	for(j=0;j<4;j++)
{
		p("\t");
	for(k=0;k<1;k++)
{
	pi(a[i][j][k]);
}
}
}

for(i=0;i<3;i++)
{
	p("\n");
	for(j=0;j<4;j++)
{
		p("\t");
	for(k=1;k<=1;k++)
{
	pi(a[i][j][k]);
}
}
}
}
int pi(int p)
{
    printf("%d",p);
}
int si()
{
    int s;
    scanf("%d",&s);
    return s;
}


float pf(float p)

{
    printf("%f",p);
}
float sf()
{
    float s;
    scanf("%f",&s);
    return s;
}

char pc(char p)

{
    printf("%c",p);
}
char sc()
{
    char s;
    scanf("%c",&s);
    return s;
}

int psi(char str[],int p)

{
     printf("%s",str);
    printf("%d",p);

}

float psf(char str[],float p)

{
     printf("%s",str);
    printf("%f",p);

}

char psc(char str[],char p)

{
     printf("%s",str);
   printf("%c",p);

}

void p(char str[])

{
     printf("%s",str);
}

int ssi(char str[])

{
	int s;
     printf("%s",str);
    scanf("%d",&s);
return s;
}

float ssf(char str[])

{
	float s;
     printf("%s",str);
    scanf("%f",&s);
return s;
}

char ssc(char str[])

{
	char s;
     printf("%s",str);
    scanf("%c",&s);
return s;
}