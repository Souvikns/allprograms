#include <stdio.h>
#include <string.h>

int main() {
    printf("enter two arrays ");
    char a[20];
    char b[20];
    scanf("%s",&a);
    scanf("%s",&b);
    int x=strcmp(a,b);
    if(x==0)
        printf("the arrays are equal\n");
    else
        printf("the arrays are not equal\n");
    return 0;
}