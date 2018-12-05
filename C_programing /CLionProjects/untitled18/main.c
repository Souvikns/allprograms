#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main() {
    int a[]={3,6,1,4,7};
    qsort('values',5, sizeof(int),a);

    for(int j=0;j<5;j++)
    {
        printf("%d",a[j]);
    }
    return 0;
}
