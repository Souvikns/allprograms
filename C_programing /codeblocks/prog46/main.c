#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("enter a number");
        scanf("%d",&a[i]);
    }
    int swap;
    int j,k;
    for(j=0;j<5;j++)
    {
        for(k=0;k<4;k++)
        {
            if(a[k]>a[k+1])
            {
                swap=a[k];
                a[k]=a[k+1];
                a[k+1]=swap;
            }
        }
    }
    int h;
    printf("the sorted array");
    for(h=0;h<5;h++)
    {
        printf("%d, ",a[h]);
    }
    return 0;
}
