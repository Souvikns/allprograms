#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[25];
    printf("enter a sentance");
    sacnf("%c",&a);
    int i=0;
    while(a[i]!='\n')
    {
        printf("%c",a[i]);
        i++;
    }


    return 0;
}
