#include<stdio.h>
#include<conio.h>
int main()
{
int max(int,int);
int a,b,c,d;
//clrscr();
printf("\n enter a value");
scanf("%d",&a);
printf("\n enter b value");
scanf("%d",&b);
printf("\n enter c value");
scanf("%d",&c);
d=  max (a,b);
printf("\n \n max=%d",max(c,d));
 getch();
 }
int max(x,y)
int x,y;
{
int z;
z=(x>=y)?x:y;
return(z);
//getch();
}

