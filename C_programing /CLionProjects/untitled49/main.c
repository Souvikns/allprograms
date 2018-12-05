#include <stdio.h>
#include <string.h>

int main() {

    char a[100];
    printf("enter a string\n");
    gets(a);
    int l=strlen(a);
    int n[l];
    int i;
    for(i=0;i<l;i++)
    {
        n[i]=a[i];
    }
    for(i=0;i<l;i++)
    {
        printf("%d ",n[i]);
    }
    return 0;
}