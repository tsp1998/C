//Functions made by TSP
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define S 5
#include <string.h>
int pi(int);
int si();
float pf(float);
float sf();
char sc();
void p(char str[]);
char pc(char);
int ssi(char str[]);
int psi(char str[], int);
float psf(char str[], float);
char psc(char str[], char p);
void main()
{

    int i = 10;
    float f = 3.14;
    char c1, c = '$';
    p("Welcome To My World\n\t");
    clrscr();
    for (c = 'a', c1 = 'A'; c <= 'z', c1 <= 'Z'; c++, c1++)
    {
        psc("\n\t", c);
        psc("\n\t", c1);
        sleep(1);
        //	delay(1000);
        clrscr();
    }
    /*i=ssi("enter number:");
pi(i);*/
    //pf(S);
    //	psc("enter the number\n",c);
    //psf("enter the number\n",f);
    //psi("enter the number\n",i);
    //c=sc();
    //pc(c);
    //f=sf();
    //pf(f);
    // p=si();
    // pi(p);
    // psi("shubham",p);
}
int pi(int p)

{
    printf("%d", p);
}
int si()
{
    int s;
    scanf("%d", &s);
    return s;
}

float pf(float p)

{
    printf("%f", p);
}
float sf()
{
    float s;
    scanf("%f", &s);
    return s;
}

char pc(char p)

{
    printf("%c", p);
}
char sc()
{
    char s;
    scanf("%c", &s);
    return s;
}

int psi(char str[], int p)

{
    printf("%s", str);
    printf("%d", p);
}

float psf(char str[], float p)

{
    printf("%s", str);
    printf("%f", p);
}

char psc(char str[], char p)

{
    printf("%s", str);
    printf("%c", p);
}

void p(char str[])

{
    printf("%s", str);
}

int ssi(char str[])

{
    int s;
    printf("%s", str);
    scanf("%d", &s);
    return s;
}

float ssf(char str[])

{
    float s;
    printf("%s", str);
    scanf("%f", &s);
    return s;
}

char ssc(char str[])

{
    char s;
    printf("%s", str);
    scanf("%c", &s);
    return s;
}