#include <stdio.h>
int main()
{
    int sum;
    int a=5,b=5;
    int *x=&a;
    int *y=&b;
    int temp=*x;
    *x=*y;
    *y=temp;
    sum=*x+*y;
    printf("Sum is %d \n",sum);
    return 0;
}