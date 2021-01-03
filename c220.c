//C Vs C++ Vs graphics
/*
Made by TSP
Programmer
Email-tsp@outlook.in
*/
 #include<stdlib.h>
//#include<graphics.h>
#include<conio.h>
#define g 0

#if(g==1){
#include<graphics.h>
#endif

int main(){
//int gd = DETECT, gm,i,j,x=0,y=0;
int max=0,min=0;
int c,bc;
int refresh=0;
clrscr();
#if(g==1){
initgraph(&gd, &gm,"C:\\TC\\BGI");
closegraph();
}
#endif

	return 0;
}