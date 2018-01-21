#include <stdio.h>
int main()
{
    int k;

    printf("Enter an integer: ");
    scanf("%d", &k);
    if(k % 2 == 0)
        printf("%d is even.", k);
    else
        printf("%d is odd.", k);

    return 0;
}
