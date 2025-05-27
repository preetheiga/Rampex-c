#include <stdio.h>
int main()
{
    char str[100];
    int length=0;
    printf("Enter a line:");
    fgets(str,100,stdin);
    while(str[length]!= '\0')
    {
        length++;
    }
    printf("%d",length);
    return 0;
}