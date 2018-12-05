#include <stdio.h>
#include <stdlib.h>
int power(int i,int j)
{
    int a=i^j;
    return a;
}
int sum(int k,int l)
{
    int h=k+l;
    return h;
}

int main()
{
    int x,y;
    int q,w;
    printf("enter 1 to find sum and 2 to find power");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:

            scanf("%d%d",&x,&y);
            int s=sum(x,y);
            printf("the sum is %d",s);
            break;
        case 2:
            scanf("%d%d",&q,&w);
            int e=power(q,w);
            printf("the power is %d",e);
            break;
        default:
            printf("wrong sentence");
    }
    return 0;
}
