#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    printf("enter a string\n");
    gets(a);
    int l=strlen(a);
    int i;
    int count=0;
    for(i=0;i<l;i++)
    {
        if(a[i]==32)
            count++;
        else
            continue;
    }
    printf("%d\n",count+1);
    return 0;
}