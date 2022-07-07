#include<stdio.h>
#include<conio.h>
void main()
{
int a=2,b=3;
clrscr();
b=a++ + b--;
a=a-- + ++b;
b=++a + --b;
printf(" %d%d \t",a,b);
getch();
}