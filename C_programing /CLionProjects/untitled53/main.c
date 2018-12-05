#include <stdio.h>

int main() {
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    int b[10];
    int i;
    int j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            b[j]=a[i];
            j++;
        }
    }
    printf("the duplicate numbers are",j);
    return 0;
}