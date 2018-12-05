#include<stdio.h>
#include<stdlib.h>
int cmpfunc(const void *a,const void *b)
{
    return(*(int*)a - *(int*)b);
}
int main()
{
    int a[5]={4,3,1,6,2};
    qsort(a,5, sizeof(int),cmpfunc);
    printf("array after sorting\n");
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}