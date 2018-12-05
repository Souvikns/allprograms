#include<stdio.h>

int main()
{
    int n,i,flag=0;
    printf("enter a number \n");
    scanf("%d",&n);
     for(i=2; i<=n/2; ++i)
    {
        
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("the number is prime\n");
    else
        printf("the number is composite number\n");
    return 0;

}