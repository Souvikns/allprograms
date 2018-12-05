#include<stdio.h>


int main()
{
    int n;
    printf("enter a number \n");
    scanf("%d",&n);
    int i;
    int a=1;
    for(i=1;i<=n;i++)
    {
        a=i*i;
        printf("%d,",a);
    }
    return 0;
}
