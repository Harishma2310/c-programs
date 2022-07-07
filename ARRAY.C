#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j;
clrscr();
for(i=0;i<10;i++)
{
a[i]=i+100;
}
for(j=0;j<10;j++)
{
printf("a[%d]=%d \n",j,a[j]);
}
getch();
}