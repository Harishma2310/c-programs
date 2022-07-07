#include<stdio.h>
#include<conio.h>
void main()
{
int x;
int *p;
int **q;
int ***r;
clrscr();
x=10;
p=&x;
q=&p;
printf("%d \n",x);
printf("%u \n",&x);
printf("%x \n",&x);
printf("%d \n",p);
printf("%u \n",&p);
printf("%d \n",*p);
x++;
printf("%d \n",*p);
x=x+100;
printf("%d \n",***r);
printf("%d \n",**q);
getch();
}
