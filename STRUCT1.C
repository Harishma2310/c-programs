#include<stdio.h>
#include<conio.h>
struct add
{
int a,b,c;
}obj[5];
void main()
{
int i ;
clrscr();
for(i=0;i<5;i++)
{
printf("\n enter two marks:");
scanf("%d%d",&obj[i].a,&obj[i].b);
obj[i].c=obj[i].a+obj[i].b;
printf("\n  mark :%d",obj[i].c);
}


getch();
}