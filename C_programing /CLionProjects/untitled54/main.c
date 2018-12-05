#include <stdio.h>

int main() {
    int n;
    printf("enter the size of the element\n");
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count=0;
    int j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {

            if(a[j]==a[j+1])
            {
                count++;
            }
            else
            {
                count=0;
            }
        }
        if(a[i]==a[i+1])
        {
            printf("%d occurs %d\n",a[i],count);
        }
        else
        {
            printf("%d occurs 1\n",a[i]);
        }

        //printf("%d occurs %d\n",a[i],count);
        count=0;
    }
    return 0;
}