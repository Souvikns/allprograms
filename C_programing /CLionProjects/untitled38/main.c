#include <stdio.h>


int main() {
    int n;
    double b;
    char c;
    printf("enter a integer\n");
    scanf("%d",&n);
    printf("enter a float number\n");
    scanf("%f",&b);
    printf("enter a double number\n");
    scanf("%c",&c);
    int x,y,z;
    x= sizeof(n);
    y= sizeof(b);
    z= sizeof(c);
    printf("the size of n=%d\n",x);
    printf("the size of b=%d\n",y);
    printf("the size of c=%d\n",z);
    return 0;
}