#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]={8,5,7,3,1};
    int i,j,swap;
    swap=a[0];
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[j]>a[j+1])
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;

            }
        }
    }
    int s;
    for(s=0;s<5;s++)
    {
        printf("%d",a[s]);
    }

    return 0;
}
