#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j;
    int b[n];
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    int total=0;
    int k;
    for(k=0;k<n;k++)
    {
        total=total+(a[k]*b[k]);
    }
    printf("%d",total);
    return 0;
}
