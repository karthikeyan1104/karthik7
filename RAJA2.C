#include <stdio.h>
int main() 
{
	int A,a,d,i,sum=0;
	printf("enter the first term\n");
	scanf("%d",&a);
	printf("enter the difference\n");
	scanf("%d",&d);
	printf("enter the no of terms\n");
	scanf("%d",&A);
    for(i=0;i<A;i++)
    {
        sum=sum+(a+i*d);
    }
    printf("%d",sum);
	return 0;
}
