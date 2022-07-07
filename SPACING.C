#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,x=1,p;
clrscr();
printf("enter a n value");
scanf("%d",&n);
for(i=1;i<=n;i++);
{
if(p==0)
{
p=0;
x=0;
}
else
{
p=1;
x=1;
}
/*for(sp=1;sp<=15+n-1;sp++)
{
printf(" ");
} */
for(j=1;j<=i;j++);
{
if(x==1)
{
printf("%d",x);
x=0;
}
else
{
printf("%d",x);
x=1;
}
}
printf("\n");
}
getch();
}