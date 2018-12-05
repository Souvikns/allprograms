#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter a character to check whether it is a vowel or consonant\n");
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a':
        printf("the character is a vowel\n");
        break;
    case 'e':
        printf("the character is a vowel\n");
        break;
    case 'i':
        printf("the character is a vowel\n");
        break;
    case 'o':
        printf("the character is a vowel\n");
        break;
    case 'u':
        printf("the character is a vowel\n");
        break;
    default:
        printf("the character is a consonant\n");
    }

    return 0;
}
