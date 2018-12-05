#include <stdio.h>
int sum=1;
int i=1;

int fact(int);


int main()
{
    printf("enter a number to find its factorial \n");
    int n;
    scanf("%d",&n);
    int s=fact(n);
    printf("%d",s);
    return 0;
}
int fact(int a)
{

    if(i==0)
    {
        sum=1;
    }
    else
    {
        sum=a*fact(i);
    }
    return sum;
}