#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int n,i,temp;
    scanf("%s",a);
    n=strlen(a);
    if(n%2!=0)
      {
      printf("enter the vallue");
          temp=n/2;
          a[temp]='*';
          printf("%s",a);
      }
      else
      {
          temp=n/2;
          a[temp]='*';
          a[temp-1]='*';
          printf("%s",a);
      }
	return 0;
}
