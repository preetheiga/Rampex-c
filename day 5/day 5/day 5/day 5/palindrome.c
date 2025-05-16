#include <stdio.h>
int main()
{
    int num=121,rev=0;
    int original;
    original=num;
    while(num!=10)
    {
        rev=rev*10+num%10;
        num/=10;
    }
    printf("The reversed number is: %d",rev);
    if(original=num)
    {
        printf("It is a palindrome :%d",original);
    }
    else
    {
        printf("It is not a palindrome :%d",original);
    }
    return 0;
}   