#include <stdio.h>

void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    printf("the first number is %d\n",*a);
    printf("the second number is %d\n",*b);
}


int main()
{
    int a,b;
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
    int *ptr=&a;
    int *ptr1=&b;
    swap(ptr,ptr1);
    return 0;
    
}