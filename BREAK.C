#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
for(i=0;i<=20;i++)
{
if(i==7)
{
break;
}
printf("%d \t",i);
}
printf("\n");
for(i=0;i<=20;i++)
{
if(i==7)
{
continue;
}
printf("%d \t",i);
}
getch();
}