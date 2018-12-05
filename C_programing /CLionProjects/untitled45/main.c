#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    printf("enter a string\n");
    gets(a);
    printf("enter the charcter to search\n");
    char s;
    scanf("%c",&s);
    int l=strlen(a);
    int count=0,i;
    for(i=0;i<l;i++)
    {
        if(s==a[i])
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    printf("the number of time the charcter occoured in the string is %d\n",count);
    return 0;
}