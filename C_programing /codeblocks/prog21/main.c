#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the distance between two cities in kilometers");
    int a;
    scanf("%d",&a);
    printf("the distance in meters %d\n",a*1000);
    printf("the distance in feet %d\n",a*3280.84);
    printf("the distances in inches %d\n",a*39370.1);
    printf("the distance in centemeters %d\n",a*1000000);
    return 0;
}
