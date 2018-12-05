#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter a number to calculate its factorial\n");
    scanf("%d",&num);
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact*=i;
    }
    printf("ther factorial of the number is %d\n",fact);
    return 0;
}
