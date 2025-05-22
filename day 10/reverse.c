#include <stdio.h>
int reverse(int num,int rev)
{
    if(num==0)
    {
        return rev;
    }
    else
    {
        return reverse(num/10,rev*10+num%10);
    }
}
int main()
{
    int num=12345;
    int result=reverse(num,0);
    printf("The reverse number is %d \n",result);
    return 0;
   
}