#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int sum=0;
    int i;
    printf("enter a number ");
    scanf("%d",&n);
    for( i=0;i<n;i=i+2)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("the sum of all the above no is %d\n",sum);
    return 0;
}
