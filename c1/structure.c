//structures (non stop programming)
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti
Email-open@outlook.in
*/
#include <stdio.h>
#include <conio.h>
#define sample sp = fopen("_sample.c", "r");
#define open fp = fopen("c:\\tsp!.txt", "w");
#define open2 fp = fopen("c:\\tsp!.txt", "w");
#define close fclose(fp);
void html();
void table();
void fncall();
void io(char function[]);
void function(int flag);
void c_doc();
void write_Function();
void for_();
void html_doc();
void c();
void cppclass();
void main()
{
	char ch;
	printf("\n0.exit\n1.C\n2.C++\n3.HTML\n4.Java\n5.Write Function");
	ch = getch();
	switch (ch)
	{
	case '0':
		exit(0);
		break;
	case '1':
		c();
		break;
	case '2':
		cppclass();
		break;
	case '3':
		html();
		break;
	case '5':
		write_Function();
		break;
	}
}

void html()
{
	char ch;
	char tag[20];
	FILE *fp;
	while (1)
	{
		printf("\n0.Exit\n1.tag\n2.Break tag\n3.Table\n4.Html Doc");
		ch = getch();
		open switch (ch)
		{
		case '0':
			main();
		case '1':
			printf("\nEnter Tag name:");
			gets(tag);
			fprintf(fp, "<");
			fprintf(fp, "%s", tag);
			fprintf(fp, ">");
			fprintf(fp, "%s", tag);
			fprintf(fp, "</");
			fprintf(fp, "%s", tag);
			fprintf(fp, ">");
			break;

		case '2':
			printf("\n</ br>");
			fputs("</ br>", fp);
			break;
		case '3':
			table();
			html();
		case '4':
			html_doc();
			html();
		}
		close
	}
}

void table()
{
	FILE *fp;
	open
			fprintf(fp, "<table>");
	fprintf(fp, "\n<th>th</th>");
	fprintf(fp, "\n<tr>");
	fprintf(fp, "\n<td>td</td>");
	fprintf(fp, "\n</tr>");
	fprintf(fp, "\n</table>");
	close
}

void html_doc()
{
	FILE *fp;
	open
			fprintf(fp, "<!doctype html>\n<html>\n\n<head>\n<title>\n\n</title>\n</head>\n\n<body>\n\n</body>\n\n</html>");
	close
}
void c_doc()
{
	char flag;
	FILE *fp;
	open
			printf("\n1.Terminal\n2.TC");
	flag = getch();
	fprintf(fp, "#include<stdio.h>\n");
	if (flag == '2')
		fprintf(fp, "#include<conio.h>\n");
	fprintf(fp, "void main()\n{\n int i,j;\n");
	if (flag == '2')
		fprintf(fp, "clrscr();\n");
	fprintf(fp, "printf(\"Hello World\");\nscanf(\"");
	fputc('%', fp);
	fputc('d', fp);
	fprintf(fp, "\",&i);");
	fprintf(fp, "\nprintf(\"");
	fputc('%', fp);
	fputc('d', fp);
	fprintf(fp, "\",i);");
	if (flag == '2')
		fprintf(fp, "\ngetch();");
	fprintf(fp, "\n}");
	close
}

void cppclass()
{
	//	int f,i;
	FILE *fp;
	char ch, mode, name[20], n[2];
	printf("\nEnter Class Name:");
	gets(name);
	printf("Select Mode\n1.Private\t2.Public\t3.Protected");
	mode = getch();
	printf("\nWant Member Function:");
	printf("\n1.Yes\t2.No:");
	ch = getch();
	open
			fprintf(fp, "class ");
	fprintf(fp, name);
	fprintf(fp, "{\n");
	switch (ch)
	{
	case '1':
		fprintf(fp, "private:");
		break;
	case '2':
		fprintf(fp, "public:");
		break;
	case '3':
		fprintf(fp, "protected:");
		break;
	}
	fprintf(fp, "\nint i,j;\n");
	if (ch == '1')
	{
		close
				function(2);
	}
	fprintf(fp, "\n};");
	close
}
void javaclass()
{
}

void css()
{
	//<style> </style>
}

void for_()
{
	char ch;
	FILE *fp;
	open
			printf("\n1.Exit\n2.Single Statement\n3.Multi Statement");
select:
	ch = getch();
	switch (ch)
	{
	case '1':
		main();
		break;
	case '2':
		printf("\n1.Exit\n2.Single\n3.Nested");
	select2:
		ch = getch();
		switch (ch)
		{
		case '1':
			main();
			break;
		case '2':
			break;
		case '3':
			break;
		default:
			goto select2;
			break;
		}
		fprintf(fp, "for(count=0;count<10;count++)");
		break;
	case '3':
		fprintf(fp, "for(count=0;count<10;count++)");
		break;
	default:
		goto select;
		break;
	}
	close
}

void while_()
{
}

void function(int flag)
{
	int f, i;
	FILE *fp;
	char ch1, mode1, name1[20];
	if (flag == 1)
		open else open2
				printf("\nHow Many Functions:");
	scanf("%d", &f);
	printf("Return type:\n1.void\n2.int\n3.float\n4.char");
	name1[0] = '\0';
	ch1 = getch();
	ch1 = getch();
	switch (ch1)
	{
	case '1':
		strcpy(name1, "void");
		break;
	case '2':
		strcpy(name1, "int");
		break;
	case '3':
		strcpy(name1, "float");
		break;
	case '4':
		strcpy(name1, "char");
		break;
	}
	for (i = 0; i < f; i++)
	{
		fprintf(fp, name1);
		fprintf(fp, " function");
		fprintf(fp, "%d", i + 1);
		fprintf(fp, "(){\n\n}\n");
	}
	if (flag == 1)
		close
}

void write_Function()
{
	FILE *sp;
	FILE *fp;
	int i = 0, j1 = 7;
	char function[150] = {'\0'};
	sample
			printf("w");
	if (sp == NULL)
	{
		printf("sexit");
		exit(0);
	}
	open if (fp == NULL)
	{
		printf("texit");
		exit(0);
	}
	while (!feof(sp))
	{
		function[i] = fgetc(sp);
		if (function[i - 1] == '=' && function[i] == '=')
		{

			fprintf(fp, "\ncase '%d':io(", j1++);
			while (1)
			{
				if (function[i] == '"' && function[i + 1] != ')')
					break;
				i--;
			}
			while (1)
			{
				fprintf(fp, "%c", function[i]);
				if (function[i] == '"' && function[i + 1] == ')')
					break;
				i++;
			}
			fprintf(fp, ");break;");
			for (i = 0; i <= 150; i++)
				function[i] = '\0';
			i = -1;
		}
		i++;
	}
	close
			fclose(sp);
}
char ch;
void c()
{
	char ch;
	printf("\n0.Exit\n1.C Doc\n2.Function\n3.For Loop\n4.Library Functions");
	ch = getch();
	switch (ch)
	{
	case '0':
		main();
		break;
	case '1':
		c_doc();
		c();
	case '2':
		function(1);
		break;
	case '3':
		for_();
		break;
	case '4':
		fncall();
		break;
	}
}
void fncall()
{
	while (1)
	{
		printf("\n1.Exit\n2.printf\n3.scanf\n4.puts\n5.cout\n6.cin");
		ch = getch();
		switch (ch)
		{
		case 1:
			main();
			break;
		case 2:
			io("p");
			break;
		case 3:
			io("s");
			break;
		case 4:
			io("ps");
			break;
		case 5:
			io("co");
			break;
		case 6:
			io("ci");
			break;
		case 7:
			io("bar2");
			break;
		case 8:
			io("bar3");
			break;
		case 9:
			io("cir");
			break;
		case 10:
			io("cd");
			break;
		case 11:
			io("clg");
			break;
		case 12:
			io("dp");
			break;
		case 13:
			io("e");
			break;
		case 14:
			io("fille");
			break;
		case 15:
			io("fillp");
			break;
		case 16:
			io("ff");
			break;
		case 17:
			io("gac");
			break;
		case 18:
			io("gbk");
			break;
		case 19:
			io("gc");
			break;
		case 20:
			io("gdn");
			break;
		case 21:
			io("gimg");
			break;
		case 22:
			io("gmc");
			break;
		case 23:
			io("gmx");
			break;
		case 24:
			io("gmy");
			break;
		case 25:
			io("gpx");
			break;
		case 26:
			io("gx");
			break;
		case 27:
			io("gy");
			break;
		case 28:
			io("gdt");
			break;
		case 29:
			io("gerrmsg");
			break;
		case 30:
			io("imgsz");
			break;
		case 31:
			io("ln");
			break;
		case 32:
			io("lnto");
			break;
		case 33:
			io("lnrel");
			break;
		case 34:
			io("mvto");
			break;
		case 35:
			io("mvrel");
			break;
		case 36:
			io("otx");
			break;
		case 37:
			io("otxy");
			break;
		case 38:
			io("pimg");
			break;
		case 39:
			io("ppx");
			break;
		case 40:
			io("rct");
			break;
		case 41:
			io("sctr");
			break;
		case 42:
			io("sbk");
			break;
		case 43:
			io("sc");
			break;
		case 44:
			io("sfs");
			break;
		case 45:
			io("slns");
			break;
		case 46:
			io("stxs");
			break;
		case 47:
			io("svp");
			break;
		case 48:
			io("txh");
			break;
		case 49:
			io("txw");
			break;
		}
	}
}
void io(char function[])
{
	FILE *fp;
	open if ((int)strcmp(function, "p") == 0)
			fprintf(fp, "printf(\"printf\");");
	if ((int)strcmp(function, "s") == 0)
		fprintf(fp, "scanf(\"scanf\");");
	if ((int)strcmp(function, "ps") == 0)
		fprintf(fp, "puts(\"puts\");");
	if ((int)strcmp(function, "co") == 0)
		fprintf(fp, "cout<<\"cout\";");
	if ((int)strcmp(function, "ci") == 0)
		fprintf(fp, "cin>>cin;");

	if ((int)strcmp(function, "a") == 0)
		fprintf(fp, "arc(intx, inty, intStangle, intEndangle, intRad);");

	if ((int)strcmp(function, "bar2") == 0)
		fprintf(fp, "bar(intleft,inttop,intright,intbottom)");
	if ((int)strcmp(function, "bar3") == 0)
		fprintf(fp, "bar3d(intleft,inttop,intright,intbottom,intdepth,inttopflag)");
	if ((int)strcmp(function, "cir") == 0)
		fprintf(fp, "circle(intx,inty,intradius)");
	if ((int)strcmp(function, "cd") == 0)
		fprintf(fp, "cleardevice()");
	if ((int)strcmp(function, "clg") == 0)
		fprintf(fp, "closegraph()");
	if ((int)strcmp(function, "dp") == 0)
		fprintf(fp, "drawpoly(intnum,int*polypoints)");
	if ((int)strcmp(function, "e") == 0)
		fprintf(fp, "ellipse(intx,inty,intstangle,intendangle,intxradius,intyradius)");
	if ((int)strcmp(function, "fille") == 0)
		fprintf(fp, "fillellipse(intx,inty,intxradius,intyradius)");
	if ((int)strcmp(function, "fillp") == 0)
		fprintf(fp, "fillpoly(intnum,int*polypoints)");
	if ((int)strcmp(function, "ff") == 0)
		fprintf(fp, "floodfill(intx,inty,intborder)");
	if ((int)strcmp(function, "gac") == 0)
		fprintf(fp, "getarccoords(structarccoordstype*var)");
	if ((int)strcmp(function, "gbk") == 0)
		fprintf(fp, "intger=getbkcolor()");
	if ((int)strcmp(function, "gc") == 0)
		fprintf(fp, "intger=getcolor()");
	if ((int)strcmp(function, "gdn") == 0)
		fprintf(fp, "STRING_Name=getdrivername()");
	if ((int)strcmp(function, "gimg") == 0)
		fprintf(fp, "getimage(intleft,inttop,intright,intbottom,void*bitmap)");
	if ((int)strcmp(function, "gmc") == 0)
		fprintf(fp, "intger=getmaxcolor()");
	if ((int)strcmp(function, "gmx") == 0)
		fprintf(fp, "intger=getmaxx()");
	if ((int)strcmp(function, "gmy") == 0)
		fprintf(fp, "intger=getmaxy()");
	if ((int)strcmp(function, "gpx") == 0)
		fprintf(fp, "intger=getpixel(intx,inty)");
	if ((int)strcmp(function, "gx") == 0)
		fprintf(fp, "intger=getx()");
	if ((int)strcmp(function, "gy") == 0)
		fprintf(fp, "intger=gety()");
	if ((int)strcmp(function, "gdt") == 0)
		fprintf(fp, "graphdefaults()");
	if ((int)strcmp(function, "gerrmsg") == 0)
		fprintf(fp, "STRING_Name=grapherrormsg(interrorcode)");
	if ((int)strcmp(function, "imgsz") == 0)
		fprintf(fp, "unsignedintger=imagesize(intleft,inttop,intright,intbottom)");
	if ((int)strcmp(function, "ln") == 0)
		fprintf(fp, "line(intx1,inty1,intx2,inty2)");
	if ((int)strcmp(function, "lnto") == 0)
		fprintf(fp, "lineto(intx2,inty2)");
	if ((int)strcmp(function, "lnrel") == 0)
		fprintf(fp, "linerel(intx,inty)");
	if ((int)strcmp(function, "mvto") == 0)
		fprintf(fp, "moveto(intx,inty)");
	if ((int)strcmp(function, "mvrel") == 0)
		fprintf(fp, "moverel(intx,inty)");
	if ((int)strcmp(function, "otx") == 0)
		fprintf(fp, "outtext(STRING)");
	if ((int)strcmp(function, "otxy") == 0)
		fprintf(fp, "outtextxy(intx,inty,STRING)");
	if ((int)strcmp(function, "pimg") == 0)
		fprintf(fp, "putimage(intleft,inttop,void*ptr,intop)");
	if ((int)strcmp(function, "ppx") == 0)
		fprintf(fp, "putpixel(intx,inty,intcolor)");
	if ((int)strcmp(function, "rct") == 0)
		fprintf(fp, "rectangle(intleft,inttop,intright,intbottom)");
	if ((int)strcmp(function, "sctr") == 0)
		fprintf(fp, "sector(intx,inty,intstangle,intendangle,intxradius,intyradius)");
	if ((int)strcmp(function, "sbk") == 0)
		fprintf(fp, "setbkcolor(intcolor)");
	if ((int)strcmp(function, "sc") == 0)
		fprintf(fp, "setcolor(intcolor)");
	if ((int)strcmp(function, "sfs") == 0)
		fprintf(fp, "setfillstyle(intpattern,intcolor)");
	if ((int)strcmp(function, "slns") == 0)
		fprintf(fp, "setlinestyle(intlinestyle,unsignedupattern,intthickness)");
	if ((int)strcmp(function, "stxs") == 0)
		fprintf(fp, "settextstyle(intfont,intdirection,intcharsize)");
	if ((int)strcmp(function, "svp") == 0)
		fprintf(fp, "setviewport(intleft,inttop,intright,intbottom,intclip)");
	if ((int)strcmp(function, "txh") == 0)
		fprintf(fp, "intger=textheight(STRING)");
	if ((int)strcmp(function, "txw") == 0)
		fprintf(fp, "intger=textwidth(STRING)");

	close
}