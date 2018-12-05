#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    printf("enter a number \n");
    scanf("%d",&n);
    int count=0;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            count++;
        else
            continue;
    }
    printf("number of even no is %d",count);
    return 0;
}
