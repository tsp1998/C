//record record
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-tsp@outlook.in
*/
#include <stdio.h>
#include <string.h>
void main()
{
	char temp[10];
	char s[10000] = {'\0'};
	char c;
	int i = 0, j = 0, k = 0, l = 0, flag = 0, flag1 = 0, flag2 = 0, flag3 = 0, check = 1;
	FILE *p;
	//	flushall();
	p = fopen("record.txt", "w");
re:
	s[0] = '\0';
	printf("name:");
	gets(temp);
	if (temp[0] == '0')
		goto end;
	strcat(s, temp);
	s[strlen(s)] = '$';
	printf("Division:");
	gets(temp);
	strcat(s, temp);
	s[strlen(s)] = '$';
	printf("Roll:");
	gets(temp);
	strcat(s, temp);
	s[strlen(s)] = '$';
	printf("class:");
	gets(temp);
	strcat(s, temp);
	s[strlen(s)] = '$';
	printf("branch:");
	gets(temp);
	strcat(s, temp);
	s[strlen(s)] = '#';
	fputs(s, p);
	fputs("\n", p);
	goto re;
end:
	fclose(p);
	/*
	flushall();
	 p=fopen("record.txt","r");
	 while(!feof(p))
	{
			c=fgetc(p);
			s[i]=c;
			i++;
}
s[i-1]='\0';
if(data1==1)
{
read:
	i=0;
while(s[i]!='\0')
{
	if(s[i]==temp100[0]&& s[i+1]==temp100[1]&& s[i+2]==temp100[2] && s[i-1]=='$')
{
i+=4;
for(j=i;j<i+4;j++){
temp200[k]=s[j];
k++;
}
k=0;
i=j+1;
for(j=i;j<i+6;j++){
temp300[k]=s[j];
k++;
}
k=0;
while(s[j]!='#'){
name1[k]=s[j+1];
j++;
k++;
}
name1[k-1]='\0';
goto result;
}
i++;
}
}

result:
write:
	 if(data1==2)
	 {
		strcpy(temp300,temp3);
	 	if(strlen(temp300)==3){
	strcpy(temp75,"000");
		strcat(temp75,temp300);
}
else if(strlen(temp300)==4){
	strcpy(temp75,"00");
		strcat(temp75,temp300);
}
else if(strlen(temp300)==5){
	strcpy(temp75,"0");
		strcat(temp75,temp300);
}
else{
	strcpy(temp75,temp300);
}
		s[strlen(s)]='$';
		strcpy(temp100,temp1);
				strcat(s,temp100);
					s[strlen(s)]='-';
           its(pin,2);
					strcpy(temp200,temp2);
						strcat(s,temp200);
					s[strlen(s)]='-';
						strcat(s,temp75);
					s[strlen(s)]='-';
					strcpy(name1,name);
						strcat(s,name1);
						s[strlen(s)]='#';
						getch();
p=fopen("tsp.txt","w");
fputs(s,p);
	 }
	 k=0;
	 if(data1==3){	
		 i=0;
	 while(s[i]!='\0')
{
	if(s[i]==temp100[0]&& s[i+1]==temp100[1]&& s[i+2]==temp100[2] && s[i-1]=='$')
{
i+=4;
for(j=i;j<i+4;j++){
s[j]=temp200[k];
k++;
}
}
i++;
data1=2;
goto write;
}
	 }

		 if(data1==4){
		 i=0;
		its(id,1);
	 while(s[i]!='\0')
{
		if(s[i+1]==temp100[0]&& s[i+2]==temp100[1]&& s[i+3]==temp100[2] && s[i]=='$')
{
findflag=1;
break;
}
i++;
}
}
	 fclose(p);
	 */
}