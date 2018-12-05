#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int i;
    printf("enter 10 integer numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the odd numbers are \n");
    int j;
    for(j=0;j<10;j++)
    {
        if(a[j]%2!=0)
            printf("%d\n",a[j]);
        else
            continue;
    }
    printf("the even numbers are \n");
    int k;
    for(k=0;k<10;k++)
    {
        if(a[k]%2==0)
            printf("%d\n",a[k]);
        else
            continue;
    }
    printf("the negative numbers are \n");
    int h;
    for(h=0;h<10;h++)
    {
        if(a[h]<0)
            printf("%d\n",a[h]);
        else
            continue;
    }
    return 0;
}
