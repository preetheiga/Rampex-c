#include <stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int num=5;
    int result=fact(num);
    printf("Factorial is %d \n",result);
    return 0;
    
}