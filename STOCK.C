#include<stdio.h>
#include<conio.h>
void main()
{
int tot,amt,tax,rate,qty,totqty,taxamt;
char stockitem,name;
clrscr();
printf("\t \t soonapaana departmental store");
printf("\n enter coustomer name:");
scanf("%s",&name);
printf("\n enter stock item:");
scanf("%s",&stockitem);
printf("\n enter quantity:");
scanf("%d",&qty);
printf("\n enter the rate:");
scanf("%d",&rate);

amt=qty*rate;
printf("total amount:%d",amt);
printf("\n enter a tax");
scanf("%d",&tax);
taxamt=rate*tax;
printf("\n tax amount:%d",taxamt);
tot=amt+taxamt;
printf("\n total amount:%d",tot);


 getch();
}