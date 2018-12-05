#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    char b[100];
    printf("enter first string\n");
    gets(a);
    printf("enter a second string\n");
    gets(b);
    int len;
    int len1=strlen(b);
    len=strlen(a);
    if(len!=len1)
    {
        printf("the strings are equal\n");
        SEEK_END;
    }
    int i;
    int count;
    for(i=0;i<len;i++)
    {
        if(a[i]==b[i])
        {
            count=0;
        }
        else
        {
            count=a[i]-b[i];
            break;
        }
    }
    if(count==0)
        printf("the strings are equal\n");
    else
        printf("%d\n",count);
    return 0;
}