#include <stdio.h>

int main() {
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    int i;
    int swap=0;
    printf("enter the elements in the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            swap=a[i];
            a[i]=a[i+1];
            a[i+1]=swap;
        }
    }
    printf("the largest element is %d\n",a[n-1]);
    return 0;
}