#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a,space;
clrscr();
for(i=5;i>=1;i--)
{
for(space=6;space<=i;space--)
{
printf("\n");
}
a=65;
for(j=1;j<=i;j++)
{
printf("%c",a++);
}
for(j=i-1;j>=0;j--)
{
printf("%c",a--);
}
printf("\n");
}
printf(" ");
getch();
}
