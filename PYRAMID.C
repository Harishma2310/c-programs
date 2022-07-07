#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter the no of lines \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<=n-i+1;j++)
{
printf("%c",(char)(j+64));
}
printf("\n");
}
getch();
}