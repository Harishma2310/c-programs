#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,n,j;
clrscr();
printf("enter ending value");
scanf("%d",&n);
B:if(i<=n)
{
j=1;
A:if(j>=i)
{
printf("\t %d",i);
j++;
goto A;
}
printf("\n");
i++;
goto B;
}
getch();
}
