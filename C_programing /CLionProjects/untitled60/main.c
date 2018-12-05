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
    int j;
    int flag;
    int ad;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                flag=1;
                ad=j;
            }
            else
            {
                continue;
            }
            if(flag==1)
            {
                printf("%d %d",a[i],a[j]);
                flag=0;
            }
        }
    }
    return 0;
}