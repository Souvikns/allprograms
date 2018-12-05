
#include <stdio.h>
#include <string.h>

int main() {

    char a[20];
    char b[20];
    int len,len1;
    scanf("%s",&a);
    scanf("%s",&b);
    len=strlen(a);
    len1=strlen(b);
    int i;
    for(i=0;i<len;i++)
    {
        printf("%c",a[i]);
    }
    for(i=((len1+len)-len);i<len+len1;i++)
    {
        printf("%c",b[i]);
    }

return 0;
}

