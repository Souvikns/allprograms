#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    printf("enter a string\n");
    gets(a);
    int l=strlen(a);
    int i;
    int count=0;
    int count1=0;
    int spaces=0;
    for(i=0;i<l;i++)
    {
        if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
            count++;
        else if(a[i]==32)
            spaces++;
        else
            count1++;
    }
    printf("VOWELS: %d \n",count);
    printf("CONSONANTS: %d \n",count1);
    printf("SPACES: %d\n",spaces);
    printf("WORDS: %d \n",spaces+1);
    return 0;
}