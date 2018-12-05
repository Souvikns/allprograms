#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min;
    printf("enter time in miutes\n");
    scanf("%d",&min);
    int m=min%60;
    int b=min-m;
    int h=b/60;
    printf("the time is %d hours and %d minutes\n",h,m);

    return 0;
}
