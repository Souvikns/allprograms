#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=7;i>=0;i=i-2)
    {
        for(j=i;j>0;j=j-2)
        {
            printf(" ");
        }
        for(j=7;j>=2*i-1;j=j-1)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
