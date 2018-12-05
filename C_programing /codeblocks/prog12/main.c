#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    int i;
    for(i=0;i<=num;i++)
    {
        printf("%d",i);
        printf("\n");
    }

    return 0;
}
