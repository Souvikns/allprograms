#include <stdio.h>
#include <time.h>

int *getrandom()
{
    static int r[10];
    int i;
    ((unsigned)time(NULL));
    for(i=0;i<10;i++)
    {
        r[i]=rand();
        printf("%d\n",r[i]);
    }
    return r;
}
int main() {
    int *p;
    int i;
    p=getrandom();
    for(i=0;i<10;i++)
    {
        printf("*p+[%d] is %d\n",i,*(p+i));
    }
    return 0;
}