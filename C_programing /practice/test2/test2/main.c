#include<stdio.h>
int factorial(int);
{
    int num;
    int result;
    printf("Enter a number to find its factorial");
    scanf("%d", &num);
    if(num<0)
    {
        printf("Factorial of negative number not possible\n");
    }
    else
    {
        result = factorial(num);
        printf("The factorial of %d is %d \n");
    }
    return 0;
}
int factorial(int num)
{
    if(num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return(num*factorial(num-1));
    }
}
