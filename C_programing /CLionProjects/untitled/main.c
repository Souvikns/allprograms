#include <stdio.h>

int main() {
    float n;
    printf("enter a number to find its square root ");
    scanf("%f",&n);
    float i;
    for(i=1;i<=n;i=i+0.0001)
    {
        if(i*i>n)
        {
            break;
        }
    }
    printf("the square root of the number is %f",i-0.0001);
    return 0;
}