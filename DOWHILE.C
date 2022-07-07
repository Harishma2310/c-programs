#include<stdio.h>
#include<conio.h>
void main()
{
int c,nl=0;
clrscr();
do
{
c=getchar();
if(c=='\n')
++nl;
}while(c!=EOF);
printf("number of lines entered are:%d\n",nl);
getch();
}