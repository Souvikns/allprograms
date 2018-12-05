#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s1[]="souvik";
    char s2[]="de";
    char s3=strcat(s1,s2);
    int len=strlen(s1);
    printf("%d\n",len);
    printf("%s",s3);

    return 0;
}
