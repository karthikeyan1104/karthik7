#include<stdio.h>
int main()
{
int n,a[100],i,j;
float median;
printf("\n enter the num:");
printf("\n enter the number");
scanf("%d",&n);
for(i=1;i<n-1;i++)
for(j=1;j<n-i;j++)
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
if(a[i]%2==0)
{
median=(a(n/2)+a(n/2+1))/2;
else
median=a(n/2+1);
}
printf("\n median",a[i]);
return 0;
}
