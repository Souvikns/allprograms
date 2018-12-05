#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter 10 numbers ");
    int a[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("enter %d no\n ",i+1);
        scanf("%d",&a[i]);
    }
    int f;
    for(f=0;f<10;f++)
    {
        printf("%d",a[f]);
        printf("\n");
    }
    return 0;
}
