#include <stdio.h>
int great(int a,int b,int c)
{
    if(a>=b && a>=c)
    {
        return a;
    }
    else if(b>=a && b>=c)
    {
        return b;
    }
    else
    {
        return c;
    }
    return 0;
}
int main()
{
    int result=great(10,15,8);
    printf("%d \n",result);
    return 0;
}