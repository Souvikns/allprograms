#include <stdio.h>
#include <string.h>

int main() {
    printf("enter to strings \n");
    char a[20];
    char b[20];
    gets(a);
    gets(b);
    scanf("%s",&b);
    char swap;
    int len1=strlen(a);
    int len2=strlen(b);
    int i,j;
    for(i=0;i<len1;i++)
    {
        for(j=0;j<i;j++)
        {
            if((a[i])>(a[i+1]))
            {
              swap=a[i];
              a[i]=a[i+1];
              a[i+1]=swap;
            }

        }
    }
    for(i=0;i<len1;i++)
    {
        for(j=0;j<i;j++)
        {
            if((b[i])>(b[i+1]))
            {
                swap=b[i];
                b[i]=b[i+1];
                b[i+1]=swap;
            }
        }
    }
    for(i=0;i<len1;i++)
    {
        if(a[i]==b[i])
        {
            continue;
        }
        else
        {
            printf("these arrays are not anagram\n");
            break;
        }
    }
    return 0;
}