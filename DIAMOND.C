#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,l=1,m,n;
clrscr();
printf("enter a odd number");
scanf("%d",&n);
k=n/2;
m=k;
for(i=1;i<=k+1;i++)
{
for(j=1;j<=m;j++)
printf(" ");
for(j=1;j<=1;j++)
printf("*");
m--;
l+=2;
printf("\n");
}
l=1;
m=n-2;
for(i=k+2;i<=n;i++)
{
for(j=1;j<=l;j++)
printf(" ");
for(j=1;j<=m;j++)
printf("*");
l++;
m-=2;
printf("\n");
}
getch();
}


