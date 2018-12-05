#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    printf("enter a string\n");
    int j;
    for(j=0;j<100;j++)
    {
        a[j]='\0';
    }
    gets(a);
    int count=0;
    int i;
    for(i=0;i<100;i++)
    {
        //printf("%c",a[i]);
        if(a[i]!='\0')
        {
            count++;
        }
        else
        {
            break;
        }
    }
    printf("the number of carachters are %d",count);
    return 0;
}