#include<stdio.h>
#include <string.h>
int main()
{
    char s[20];
    printf("enter a string");
    gets(s);
    puts("enter a character");
    char c;
    scanf("%c",&c);
    int flag=0;
    int k;
    k=strlen(s);
    int i;
    for(i=0;i<k;i++)
    {
        if(s[i]==c)
            flag++;
    }
    printf("the frequency is %d",flag);
    return 0;
}