#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a alphabet:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        printf("The character is a Vowel %c");
    }
    else
    {
        printf("The character ia a Consonants %c");
    }
}