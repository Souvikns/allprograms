#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]=[1,6,3,8,4];
    int i;
    int sw;
    for(i=0;i<4;i++)
    {
        if(a[i]>a[i+1])
        {
            sw=a[i+1];
            a[i+1]=a[i];
            a[i]=sw;
        }
        else
            continue;
    }
    int j;
    for(j=0;j<5;j++)
    {
        printf("%d\n",a[j]);
    }
    return 0;
}
