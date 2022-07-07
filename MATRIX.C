#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k ,n=5;
clrscr();
printf("enter the number of rows");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("%d",(i-5));
}
printf("\n");
}
getch();
}
