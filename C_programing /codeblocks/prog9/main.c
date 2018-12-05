#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter two number");
    scanf("%d",&a);
    scanf("%d",&b);
    int sum=a+b;
    int mean=sum/2;
    printf("the sum of the two numbers are %d\n",sum);
    printf("the mean of two numbers are %d\n",mean);
    return 0;
}
