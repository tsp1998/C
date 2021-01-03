//file character count
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/

#include<graphics.h>
#include<stdio.h>
#include<conio.h>
 #include<stdlib.h>
void main()
{
char ch;
FILE *fp;
int i=0,j=0,flag=0;
clrscr();
fp=fopen("tsp.txt","r");
if(fp==NULL){
cleardevice();
getch();
}else{
while(1){
if(ch==EOF)
break;
ch=fgetc(fp);
if(flag==0){
if(ch==',')
i++;
if(ch=='b')
flag++;
}else{
if(ch==',')
j++;
}
}
fclose(fp);
}
printf("%d",i);
printf(" %d",j);
getch();
}