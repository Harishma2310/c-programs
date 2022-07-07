#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,k=1;
clrscr();
for(r=1;r<=5;r++)
{
for(c=5;c<=r;c--)
{
if(c<=r)
printf("%d",k++);
printf(" ");
}
printf("\n");
}
getch();
}