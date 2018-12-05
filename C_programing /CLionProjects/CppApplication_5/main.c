#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("enter a string\n");
    gets(a);
    int l=strlen(a);
    int count=0;
    int i;
    for(i=0;i<l;i++)
    {
        if(a[i]==32)
            count++;
        else
            continue;
    }
    printf("the number of words are %d\n",count+1);
    return 0;
}
