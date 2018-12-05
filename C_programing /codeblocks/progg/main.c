#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",n);
    int i;
    int j;
    int arr[n];
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            arr[i]=j;
        }
    }
    int k;
    int min,max;
    for(k=0;k<n;k++)
    {
        min=min+k;
    }
    max=min;
    min=min-arr[n-2];
    max=max-arr[1];
    printf("%d%d",min,max);
    return 0;
}
