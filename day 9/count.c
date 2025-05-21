#include <stdio.h>
int countDigits(int n)
{
    int count=0;
    while(n!=0)
    {
        n/=10;
        count++;
    }
    return count;
}
int main()
{
    int number=786251;
    int result=countDigits(number);
    printf("Number of digits: %d \n",result);
    return 0;
}