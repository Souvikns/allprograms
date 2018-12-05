//Write a Program to Print the Alternate Elements in an Array
#include <stdio.h>

int main() {
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i=i+2)
    {
        if(i==n)
        {
            printf("%d",a[i]);
            break;
        }
        else
        {
            printf("%d,",a[i]);
        }

    }

    return 0;
}