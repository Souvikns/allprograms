#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<i;j++)
        {

            printf("%d",num);
        }
        printf("\n");

    }
    return 0;
}
