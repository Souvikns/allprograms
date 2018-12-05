#include <stdio.h>
#include <stdlib.h>
void function()
{
    printf("hello world\n");
    function();
}

int main()
{
    function();

    return 0;
}
