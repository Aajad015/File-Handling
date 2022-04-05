#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char p[30];//q[30];
int d;
//char c='A';
FILE *f;
clrscr();
f=fopen("azad1.txt","w");
gets(p);
//gets(d);// gets not use for the interger only use for the String.
scanf("%d",&d);
fprintf(f,"%s %d",p,d);
  //fputc(c,f);  // print the character on the azad.txt
//gets(p); //take String
//fputs(p,f);  //Write the string on the fine azad.txt
fclose(f);
getch();
}