#include <stdio.h>
int main()
{
   int ret;
   char oldname[] = ".txt";
   char newname[] = "newfile.txt";
   ret = rename(oldname, newname);
   if (ret == 0)
   {
      printf("File renamed successfully");
   }
   else
   {
      printf("Error: unable to rename the file");
   }
   return (0);
}