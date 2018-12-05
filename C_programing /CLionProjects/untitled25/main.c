#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("enter a string\n");
    gets(s);
    int len=strlen(s);
    int i;
    int count=0;
    int a;
    for(i=0;i<len;i++)
    {
        if(s[i]==' ')
        {
            break;
        }
        else
            printf("%c",s[i]);
    }
    //printf("%d",count);
    return 0;
}
