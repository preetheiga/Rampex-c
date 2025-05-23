#include <stdio.h>
int reverse(int n)
{
    if(n==0)
    {
        return 0;
    }
    printf("%d\n",n);
    return reverse(n-1);
}
int main()
{
    printf("%d \n",reverse(10));
    return 0;
}