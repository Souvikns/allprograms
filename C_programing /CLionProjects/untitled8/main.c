#include <stdio.h>

int main() {
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    int i;
    printf("enter the values of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int swap;
    int j;
    int k;
    for(j=0;j<n;j++)
    {
        for(k=0;k<n;k++)
        {
            swap=a[k];
            a[k]=a[k+1];
            a[k+1]=swap;
        }
    }
    int x;
    printf("the sorted array\n");
    for(x=0;x<n;x++)
    {
        printf("%d\n",a[x]);
    }
    return 0;
}