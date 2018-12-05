#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    printf("enter a string\n");
    gets(a);
    int l=strlen(a);
    int i;
    for(i=0;i<l;i++)
    {
        if(a[i]==32)
        {
            printf("%c",a[i]);
        }
        else
        {
            printf("%c",a[i]-32);
        }

    }
    return 0;
}