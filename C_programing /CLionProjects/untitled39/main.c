#include <stdio.h>

int main() {

    int n1,n2;
    printf("enter two numbers\n");
    scanf("%d %d",&n1,&n2);
    int a;
    if(n1>n2)
    {
        a=n1;
    }
    else
    {
        a=n2;
    }
    while(1)
    {
        if(a%n1==0&&a%n2==0)
        {
            printf("the Lcm of %d and %d is %d.",n1,n2,a);
            break;
        }
        ++a;
        //printf("%d\n",a);
    }
    return 0;
}