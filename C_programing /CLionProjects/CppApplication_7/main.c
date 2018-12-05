#include <stdio.h>
#include <string.h>

int main()
{
    char a[]={"ABCDEFGFEDCBA"};
    int l=strlen(a);
    int i,j;
    int k=l/2;
    int h=l/2;
    for(i=0;i<7;i++)
    {
        for(j=0;j<l;j++)
        {
            if(j<k&&j>h)
                printf(" ");
            else
                printf("%c",a[j]);
        }
        printf("\n");
        k++;
        h--;
    }
    
    return 0;
}