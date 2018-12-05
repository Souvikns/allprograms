#include <stdio.h>

int main() {
    int n;
    printf("enter the size of the number\n");
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j;
    int count=1;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                printf("%d occurs %d\n",a[i],count);
                count=1;
            }
        }
    }
    return 0;
}