#include<stdio.h>
int main()
{
    long int n;
    printf("Enter the unique book code");
    scanf("%ld",&n);
    int a[10];
    int i;
    for(i=0;i<10;i++)
    {
        a[i]=n%10;
        n=n-n%10;
        n=n/10;
    }
    int j,k;
    int sum=0;
    for(j=9;j>=0;j--)
    {
        for(k=1;k<=10;k++)
        {
            sum=sum+(k*a[j]);
        }
    }
    if(sum%11==0)
    printf("legal ISBN");
    else
    printf("illegal ISBN");
    return 0;
}

