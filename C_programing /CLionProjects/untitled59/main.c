#include <stdio.h>

int main() {
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    int i;
    printf("enter the elements in the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j;
    int count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
            else
            {
                continue;
            }
        }
        printf("%d occurs %d\n",a[i],count);
        count=0;
    }
    return 0;
}