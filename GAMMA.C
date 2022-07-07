#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
char alphabet='a';
clrscr();
printf("enter the number of rows");
scanf("%d",&n);

for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
printf("%c",alphabet++);
}
printf("\n");
}
getch();
}