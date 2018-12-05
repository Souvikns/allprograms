#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter a number to check wether a number the number is positive");
    scanf("%d",&num);
    if(num>0)
        printf("the number you entered is positive\n");
    else
        printf("the number you entered is negative\n");
    return 0;
}
