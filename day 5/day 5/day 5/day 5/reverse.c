#include <stdio.h>
int main()
{
    int num=2345,rev=0;
    while(num !=0)
    {
        rev=rev*10+num%10;
        num/=10;
    }
    printf("The reverse number is: %d",rev);
    return 0;
    
}