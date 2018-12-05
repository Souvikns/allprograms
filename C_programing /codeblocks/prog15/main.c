#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    if(age<18)
        printf("you are not eligible for voting\n");
    else
        printf("you are eligible for voting\n");

    return 0;
}
