#include<stdio.h>
#include<conio.h>
void  add ();
void sub(int ,int);
int mul();
int div(int,int);
void main()
{
add();
sub(20,10);
printf("\n multiply %d",mul());
printf("\n division %d",div(4,2));
getch();
}
void add()
{
int a,b,c;
printf("\n enter the values");
scanf("%d%d",&a,&b);
c=a+b;
printf("\n total :%d",c);
}
void sub(int a,int b)
{
int c;
c=a-b;
printf("\n subracted value:%d",c);
}
int mul()
{
int a,b,c;
printf("enter the value");
scanf("%d%d",&a,&b);
c=a*b;
return(c);
}
int div(int a,int b)
{
int c;
c=a/b;
return(c);
}
int c;

