#include<stdio.h>

void asdf()
{
    printf("hello world");
    asdf();
}
int main()
{
    asdf();
    return 0;
}