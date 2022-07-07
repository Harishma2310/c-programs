#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n=5;
clrscr();
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%c",'A' +j-1);
}
printf("\n");
}
getch();
}