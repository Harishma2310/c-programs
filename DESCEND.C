#include<stdio.h>
#include<conio.h>
void main()
{
int s=1,e;
clrscr();
printf("enter a starting and ending value");
scanf("%d%d",&e);
top:if(e>=s)
{
printf("%d \t",e);
e--;
goto top;
}
getch();
}