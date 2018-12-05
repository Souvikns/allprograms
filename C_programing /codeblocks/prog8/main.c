#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    int i,flag=0;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("the number is a prime no");
    else
        printf("the number is not a prime no");
    return 0;
}
