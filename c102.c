//Display Pattern
//*
//* *
//* * *
//* * * *
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void star(char c);
void main()
{
  char x;
  printf("\n\tEnter Any Symbol:");
  scanf("%c", &x);
  star(x);
  return (0);
}
void star(char c)
{
  int i, j;
  for (i = 1; i <= 4; i++)
  {
    printf("\n\n");
    for (j = 1; j <= i; j++)
    {
      printf("\t", c);
    };
  };
}