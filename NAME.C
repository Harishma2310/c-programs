#include<stdio.h>
#include<conio.h>
void main()
{
char a[10],i=0,j;
clrscr();
printf("\n enter your name");
scanf("%s",a);
A:if(a[i]!='\0')
{
j=0;
B:if(j<=i)
{
printf("%c",a[j]);
j++;
goto B;
}
printf("\n");
i++;
goto A;
}
getch();
}
