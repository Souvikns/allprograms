#include <stdio.h>
#include <stdlib.h>
int multiply(int a,int b)
{
    int c= a*b;
    return c;
}

int main()
{
    printf("enter two numbers\n ");
    int x,y,z;
    scanf("%d%d",&x,&y);
    z=sum(x,y);
    printf("the multiply of the numbsers are %d\n",z);
    return 0;
}
