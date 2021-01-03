#include<stdio.h>
void record();
int data=2,findflag=0;
char acc,temp1[6],temp2[6],temp10[6],temp20[6],temp3[6],temp30[6],temp75[7],name[20];
void main()
{
	acc='6';
	data=4;
	findflag=0;
//	gets(temp3);
//	gets(name);
	record();
	if(findflag==1)
printf("found");
else
printf("not found");
}
void record()
{
	char s[10000];
	char c;
	int i=0,j=0,k=0,l=0,flag=0,flag1=0,flag2=0,flag3=0,check=1;
	FILE *p;
	 p=fopen("tsp.txt","r");
	 while(!feof(p))
	{
			c=fgetc(p);
			s[i]=c;
			i++;
}
s[i-1]='\0';
			puts(s);
if(data==1)
{
gets(temp1);
read:
	i=0;
while(s[i]!='\0')
{
	if(s[i]==temp1[0]&& s[i+1]==temp1[1]&& s[i+2]==temp1[2] && s[i-1]=='$')
{
i+=4;
for(j=i;j<i+4;j++){
temp2[k]=s[j];
k++;
}
k=0;
i=j+1;
for(j=i;j<i+6;j++){
temp3[k]=s[j];
k++;
}
k=0;
while(s[j]!='#'){
name[k]=s[j+1];
j++;
k++;
}
name[k-1]='\0';
goto result;
}
i++;
}
}
result:
	 if(data==2)
	 {
	 	if(strlen(temp3)==3){
	strcpy(temp75,"000");
		strcat(temp75,temp3);
}
else if(strlen(temp3)==4){
	strcpy(temp75,"00");
		strcat(temp75,temp3);
}
else if(strlen(temp3)==5){
	strcpy(temp75,"0");
		strcat(temp75,temp3);
}
else{
	strcpy(temp75,temp3);
}
write:	
	 	s[strlen(s)]='$';
	 			strcat(s,temp1);
	 				s[strlen(s)]='-';
	 					strcat(s,temp2);
	 				s[strlen(s)]='-';
	 					strcat(s,temp75);
	 				s[strlen(s)]='-';
	 					strcat(s,name);
	 					s[strlen(s)]='#';
	 					puts(s);
p=fopen("tsp.txt","w");
fputs(s,p);
	 }
	 k=0;
	 if(data==3){	gets(temp1);
	 	puts("new");
	 		gets(temp20);
	 	 i=0;
	 while(s[i]!='\0')
{
	if(s[i]==temp1[0]&& s[i+1]==temp1[1]&& s[i+2]==temp1[2] && s[i-1]=='$')
{
i+=4;
for(j=i;j<i+4;j++){
s[j]=temp20[k];
printf("%c",s[j]);
k++;
}
}
i++;
}
puts(s);
	 }
	 
	 	 if(data==4){	gets(temp1);
	 	 i=0;
	 while(s[i]!='\0')
{
	if(s[i]==temp1[0]&& s[i+1]==temp1[1]&& s[i+2]==temp1[2] && s[i-1]=='$')
{
findflag=1;
}
i++;
}
}
	 fclose(p);
}