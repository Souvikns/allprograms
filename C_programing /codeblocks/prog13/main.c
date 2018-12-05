#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    if(a==b)
        printf("the numbers are equal\n");
    else
        printf("the numbers are not equal\n");

    return 0;
}
