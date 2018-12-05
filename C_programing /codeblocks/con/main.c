#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;
    int count=0;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<i;j++)
        {
            count++;
            printf("%d",count);
        }
        printf("\n");
    }
    return 0;
}
