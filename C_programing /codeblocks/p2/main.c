#include <stdio.h>
#include <stdlib.h>

int main()
{
     char a[100];
    char b[100];
    int len,len1;
    gets(a);
    gets(b);
    len=strlen(a);
    len1=strlen(b);
    int len2=len1+len1;
    char c[len2];
    int i;
    for(i=0;i<len;i++)
    {
        c[i]=a[i];
    }
    for(i=len;i<len2;i++)
    {
        c[i]=b[i];
    }
    int j;
    for(j=0;j<len2;j++)
    {
        printf("%c",c[j]);
    }
    return 0;
}
