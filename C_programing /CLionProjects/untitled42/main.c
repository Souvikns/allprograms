#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    printf("enter a number\n");
    gets(s);
    int l=strlen(s);
    int i;
    int j;
    int swap;
    for(i=0;i<l;i++)
    {
        for(j=0;j<l-1;j++)
        {
            if(s[j]>s[j+1])
            {
                swap=s[j];
                s[j]=s[j+1];
                s[j+1]=swap;
            }
            else
            {
                continue;
            }
        }
    }
    int x;
    for(x=0;x<l;x++)
    {
        printf("%c\n",s[x]);
    }
}