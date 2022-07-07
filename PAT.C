#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
k=1;
clrscr();
for(i=1;i<=5;i++)
{
printf("\n");
for(j=5;j>=1;j--)
{
if(j>i)
printf("   ");
else
printf("%d\t",k++);
}
printf("\n");
}
getch();
}
