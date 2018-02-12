#include<stdio.h>
#include<conio.h>
void main()
{
int z,y,*a,*b,sum;
clrscr();
printf("Enter two numbers to be added:");
scanf("%d%d",&z,&y);
a=&z;
b=&y;
sum=*a+*b;
printf("Addition is:%d",sum);
getch();
}
