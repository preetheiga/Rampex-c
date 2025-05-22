#include <stdio.h>
int digits(int n)
{
    int a=1;
    if(n==0)
    {
        return 0;
    }
    else
    {
    return a+digits(n/10);
    }
}
int main()
{
    printf("The sum of digits is %d",digits(12345));
    return 0;
}