#include <stdio.h>
#include <stdlib.h>
void fun()
{
    printf("hello world\n");
    fun();
}
int main()
{
    fun();
    return 0;
}