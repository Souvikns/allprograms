#include <stdio.h>
#include <string.h>

int main() {
    char s[20];
    char s1;
    printf("enter a string\n ");
    scanf("%s",&s);
    printf("enter a character to find its frequency\n");
    scanf("%c",&s1);
    int i,len;
    int flag=0;
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s1==s[i])
        {
            flag++;
        }
    }
    printf("%c is %d times in the string entered by you ",s1,flag);
    return 0;
}
