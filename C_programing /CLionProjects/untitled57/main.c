//write a program to add two numbers by returning a pointer to a function
#include <stdio.h>
int* add(int*,int*);
int main() {
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    int *p;
    p=add(&a,&b);
    printf("the sum of thw numbers is %d",*p);
    return 0;
}
int* add(int *x,int *y)
{
    int sum=*x + *y;
    int *ptr=&sum;
    return ptr;
}