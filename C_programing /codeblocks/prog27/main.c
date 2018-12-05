#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("enter the temperature\n ");
    int temp;
    scanf("%d",&temp);
    if(temp>=80)
        printf("go play golf\n");
    else if(temp>70&&temp<79)
        printf("put on a jacket\n");
    else
        printf("its way to cold\n");
    return 0;
}
