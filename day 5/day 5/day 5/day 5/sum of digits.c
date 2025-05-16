#include <stdio.h>
int main()
{
    int num=2345,sum=0;
    while(num !=0)
    {
        sum+=num%10;
        num/=10;
    }
    printf("The sum is: %d",sum);
    return 0;
    
}