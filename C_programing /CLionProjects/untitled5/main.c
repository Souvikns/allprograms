#include <stdio.h>
#include <string.h>
int main() {
    char s[20];
    printf("enter a string");
    gets(s);
    int l=strlen(s);
    int v , c , d , st;
    int i;
    for(i=0;i<l;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            v++;
        else if(s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'||s[i]=='0')
            d++;
        else if(s[i]==' ')
            st++;
        else
            c++;
    }
    printf("the number if vowels are %d\n",v);
    printf("the number if consonants are %d\n",c);
    printf("the number if digits are %d\n",d);
    printf("the number if spaces are %d\n",st);

    return 0;
}