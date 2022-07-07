#include<stdio.h>
#include<conio.h>
struct add
{
int a,b,c;
}obj1;
void main()
{
int i ;
struct add obj2;
clrscr();
for(i=0;i<5;i++)
{
printf("\n enter two marks:");
scanf("%d%d",&obj1.a,&obj1.b);
obj1.c=obj1.a+obj1.b;
printf("\n mark :%d",obj1.c);
}
for(i=0;i<5;i++)
{
printf(" \n enter two marks:");
scanf("%d%d",&obj2.a,obj2.b);
obj2.c=obj2.a+obj2.b;
printf("\n mark :%d",obj2.c);
}
getch();
}