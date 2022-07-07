#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,n=5,f=1;
clrscr();
top:if(i<=n)
{
	f=f*i;
	printf("%d",f);
	i++;
	goto top;
}
getch();
}