#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    printf("enter a number\n");
    gets(a);
    int l=strlen(a);
    int i;
    for(i=l-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}