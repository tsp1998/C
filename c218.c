//continually changing random number with clock
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
date:20-01-2018
*/
#include <stdio.h>
#include <conio.h>
#include <time.h>
main() {
	int i=0;
	srand(time(0));
while(i<2){
printf("%d\n",rand());
i++;
}
}