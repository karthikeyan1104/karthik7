#include<stdio.h>
int main(void)
{
    int n,hr,min;
    scanf("%d",&n);
    if(n<60)
    {
        printf("0 %d",n);
        printf("enter the value");
    }
    else
    {
        hr=n/60;
        min=n%60;
        printf("%d",hr);
        printf("%d",min);
    }
    return 0;
}
