#include <stdio.h>
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
 int result=lcm(12,18);
 printf("The LCM is %d",result);
 return 0;
}
    