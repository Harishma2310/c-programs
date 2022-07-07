#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("enter i value");
scanf("%d",&i);
n=1;
    top: if(i>=n)
	{
		if(n%2!=0 && n%3!=0 && n%5!=0 && n%7!=0)
		{
		printf("\t %d",i);
		}
	i--;
	goto top;
	}
getch();
}