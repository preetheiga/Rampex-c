#include <stdio.h>
int reversenum(int num)
{
    int rev=0;
    int reversenum;
    int original;
    original=reversenum;
    while(num!=10)
    {
        rev=rev*10+num%10;
        num/=10;
    }
    printf("The reversed number is :%d \n",rev);
    return rev;
}
int main()
{
    int num=121;
    int original;
    int rev;
    if(num=rev)
    {
        printf("It is a palindrome \n",num);
    }
    else
    {
        printf("It is not a palindrome\n",num);
    }
    return 0;
}