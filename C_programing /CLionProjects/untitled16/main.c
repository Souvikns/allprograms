#include <stdio.h>

int main() {
    int n;
    printf("enter the size of the series\n");
    scanf("%d",&n);
    int a[n];
    a[0]=0;
    a[1]=1;
    int i;
    for(i=2;i<n;i++)
    {
        a[i]=a[i-2]+a[i-1];
    }
    int j;
    for(j=0;j<n;j++)
    {
        printf("%d,",a[j]);
    }
    return 0;
}
