#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    int i,j;
    double sum=0;
    for(i=1;i<=n;i++);
    {
        for(j=1;j<=i;j++)
        {
            sum=sum+(i/j);
        }
    }
    printf("the sum of the series is %d",sum);
    return 0;
}
