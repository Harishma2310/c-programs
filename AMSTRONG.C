#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,c,sum=0,temp;
clrscr();
printf("enter n value");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
c=r*r*r;
sum=sum+c;
n=n/10;
}
n=temp;
if(r==n)
printf("%d is a amstrong number  ",n);
else
printf("%d is not an amstrong number",n);
getch();
}








