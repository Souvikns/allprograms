#include <stdio.h>

int fact(int a)
{
    int sum=1;
    if(a==0)
    {
        sum=1;
    }
    else
    {
        sum=a*fact(a-1);
    }
    return sum;
}
int main()
{
    int n;
    printf("enter a number to find its factorial\n");
    scanf("%d",&n);
    int factorial=fact(n);
    printf("%d",factorial);
    return 0;
}
