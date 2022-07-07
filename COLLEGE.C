#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char *s,*p,*a,*b;
int ch;
clrscr();
//printf("enter a string 1");

//scanf("%s",s);
//printf("enter a string 2");
//scanf("%s",&p);
printf("enter a choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
//char s;
printf("enter string 1");
scanf("%s",&s);
gets(s);
gets(p);
printf("%s",strupr(p));
printf("%s",strupr(s));
break;
//int i,n=2;
//for( i=1;i<=2;i++)
//{
//printf("enter a marks");
//scanf("%d%d",&a,&b);
//c=a+b;
//}
//break;
//}
case 2:
printf("enter string 2");
scanf("%s",&a);
gets(a);
gets(b);
printf("%s",strupr(a));
printf("%s",strupr(b));
break;

default:
printf("invalid");
break;
}
getch();
}

