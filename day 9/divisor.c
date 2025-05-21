#include <stdio.h>
int divisorsum(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    printf("%d",sum);
    return sum;
}
int main()
{
    divisorsum(8);
    return 0;
}
