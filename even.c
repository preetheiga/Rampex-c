#include <stdio.h>
int main()
{
    int i=0;
    for(i=1;i<=50;i++)
    {
        while(i%2==0)
        {
            printf("The even numbers are:%d \n",i);
            i++;
        }
    }
    return 0;
}