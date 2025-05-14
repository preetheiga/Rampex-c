#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter a Character:");
    scanf("%c",&ch);
    if(isupper(ch))
    {
        printf("It is a uppercase character");
    }
    else if(islower(ch))
    {
        printf("It is a lowercase character");
    }
    else
    {
        printf("It is not a character");
    }
    return 0;
}