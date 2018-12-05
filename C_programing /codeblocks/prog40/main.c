#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]={8,5,7,3,1};
    int i,swap,j;
    int f;
    for(i=0;i<5;i++)
    {
        for(f=1;f<5-i;f++)
        {
        if(a[i]>a[f])
        {
            printf("hello ");
            swap=a[i];
            a[i]=a[f];
            a[f]=swap;

        }
        }
    }

    for(j=0;j<5;j++)
    {
        printf("%d",a[j]);
    }
    return 0;
}
