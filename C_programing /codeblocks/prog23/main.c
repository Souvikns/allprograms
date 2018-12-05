#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the sides of the triangle");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d,e;
    if(a>b&&b>c)
        d=a;
    else if (b>a&&a>c)
        d=b;
    else
        d=c;
    if(d==a)
        e=b+a;
    else if (d==b)
        e=a+c;
    else
        e=a+b;
    if(d>e)
        printf("The sides are valid\n");
    else
        printf("The sides are not valid\n");

    return 0;
}
