#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,j=1;
clrscr();
printf("enter a value");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
j=j*i;
}
printf("factorial %d",j);
getch();
}