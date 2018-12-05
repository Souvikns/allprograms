#include <stdio.h>
#include <string.h>


int main() {
    char a[10];
    char b[10][10];
    int q,w;
    for(q=0;q<10;q++)
    {
        for(w=0;w<10;w++)
        {
            b[q][w]='\0';
        }
    }
    printf("enter a string\n");
    gets(a);
    int i;
    int j=0;
    int d=0;
    int l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]!=32)
        {
            b[j][d]=a[i];
            d++;

        }
        else
        {
            j++;
            d=0;
        }
    }
    int x,y;
    for(x=0;x<10;x++)
    {
        for(y=0;y<10;y++)
        {
            if(b[x][y]!='\0')
            {
                printf("%c",b[x][y]);
            }
            else
            {
                continue;
            }
        }
        printf("\n");
    }



  //printf("%c",b[1][1]);
    return 0;
}