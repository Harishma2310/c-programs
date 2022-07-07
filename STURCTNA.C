#include<stdio.h>
#include<conio.h>
struct student
{
char firstname[50];
int roll,m1,m2,tot;
float avg;
}s[5];
void main()
{
int i ;
clrscr();
printf("enter info of students \n");
for(i=0;i<5;i++)
{
//roll=i+1;
printf(" enter first name");
scanf("%s",&s[i].firstname);
printf("\n for roll number:");
scanf("%d",&s[i].roll);

printf("\n enter a marks");
scanf("%d%d",&s[i].m1,&s[i].m2);
s[i].tot=s[i].m1+s[i].m2;
printf("\n Total :%d",s[i].tot);
s[i].avg=s[i].tot/2;
printf("\n Average:%f",s[i].avg);
}
/*printf("displaying info : \n");
for(i=0;i<5;i++)
{
printf("\n roll number:%d\n",s[i].roll);
printf("first name",s[i].firstname);
//printf("s[i].firstname");
printf("marks:%f",s[i].marks);
//printf("\n");*/

getch();
}

