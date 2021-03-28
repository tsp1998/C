//Write File
/*Tandale Shubham Parmeshwar
E36 F.E.(Mech.) 
SKNSCOE,Korti.*/
#include <stdio.h>
void main()
{
  FILE *f;
  f = fopen("text.txt", "w");
  //fopen("File Name","mode");
  if (f == NULL)
    printf("\t\nFile not created");
  else
    printf("\t\nFile created");

  fclose(f);
}