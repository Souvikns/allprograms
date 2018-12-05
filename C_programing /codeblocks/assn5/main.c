#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=0;i<100;i++)
    {

        for(int j=0;j<i;j++)
        {

            if(i%j==0)
                printf("%d",i);
            else
                printf("\n");
        }
    }
    return 0;
}
