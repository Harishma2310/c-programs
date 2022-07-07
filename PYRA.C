#include<stdio.h>
#include<conio.h>
void main()
{
int  n,i,j,k,l=0;
clrscr();
printf("enter the number of rows");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(j=0;j<=n;j++)
{
printf(" ");
}
for(k=0;k<=i;k++)
{
l++;
printf("%d \t",l);
}
printf("\n");
}
getch();
}