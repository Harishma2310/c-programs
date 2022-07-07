#include<stdio.h>
#include<conio.h>
void main()
{
int *a;
int n,i,j,*t;
int sum=0;
clrscr();
printf("enter a n value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\t");
scanf("%d",&*(a+i));
sum=sum+(*(a+i));
}
printf("\n sum of array element :%d",sum);
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(*(a+j)>=a[j+i]);
{
*t=*(a+j);
*(a+j)=*(a+j+1);
*(a+j+1)=*t;
}
}
}
printf("\n ascending order:\n \n");
for(i=0;i<n;i++)
{
printf("\t%d\n",*(a+i));
}
getch();
}