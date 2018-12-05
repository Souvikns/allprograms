#include <stdio.h>
int fun(int a)
{
    int sum=0;
    if(a==0)
    {
        sum=0;
    }
    else
    {
        sum=sum+a%10;
        a=a-a%10;
        sum=sum+fun(a/10);
    }
    return sum;
}

int main() {
    int n;
    printf("enter a five digit number\n");
    scanf("%5d",&n);
    int x=fun(n);
    printf("the sum of the digits is %d",x);

    return 0;
}
