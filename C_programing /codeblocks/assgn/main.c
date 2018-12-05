/*
 * C Program to Find & Display Multiplication table
 */
#include <stdio.h>

int main()
{
    int number,count =0;
    printf("enter a number ");
    scanf("%d",&number);
    while(number>0)
    {
     number =number /10;
     count=count+1;
    }
    printf("number of digits in the given number was %d",count);
    return 0;
}

