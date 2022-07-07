#include<stdio.h>
#include<conio.h>
void main()
{
int r,s=0;
int vdate,vmonth,vyear,datevalue;
clrscr();
printf("\n enter your date");
scanf("%d",&vdate);
printf("\n enter your month");
scanf("%d",&vmonth);
printf("\n enter your year");
scanf("%d",&vyear);
datevalue=vdate+vmonth+vyear;
printf("\n your datevalue:%d",datevalue);
top:
if(datevalue!=0)
{
r=datevalue%10;
s=s+r;
datevalue=datevalue/10;
goto top;
}
if(s>=10)
{
datevalue=s;
s=0;
goto top;
}
switch(s)
{
case 1:
printf("no:1");
printf("\n name:sanjay");
break;
case 2:
printf("\n no:2");
printf("\n name:sanjayramsamy");
break;
case 3:
printf("\n no:3");
printf("\n name:sanjeevramasamy");
break;
case 4:
printf("\n no:4");
printf("\n name:harishma");
break;
default:
printf("\n enter your choice");
printf("\n enter [1-4or9]");
printf("\n try again!!!!!!!!!!");
break;
case 9:
printf("\n no:9");
printf("name:chitra");
break;
}
getch();
}