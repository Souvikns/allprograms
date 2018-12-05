#include <stdio.h>
#include <stdlib.h>

int main()
{
    //write a program to calculate the value of the series:1/1!+2/2!+3/3!+.....
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    int i,j;
    double s;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            s=s+i/j;
        }
    }
    printf("the sum of the series %d",s);
    return 0;
}
