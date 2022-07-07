#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,a=1,s;
clrscr();
printf("enter number of rows:");
scanf("\t %d",&i);
for(j=1;j<=i;j++)
{
for(k=1;k<=j;k++)
printf("\t %d",a++);
printf("\n");
}
getch();
}
