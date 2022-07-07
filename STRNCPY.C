#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char *s,*p;
clrscr();
gets(s);
strncpy(p,s,4);
printf("%s",p);
getch();
}