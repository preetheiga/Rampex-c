#include <stdio.h>
int main()
{
    int sum;
    int a=10;
    int b=10;
    int *x=&a;
    int *y=&b;
    int temp=*x;
    *x=*y;
    *y=temp;
    sum=*x+*y;
    printf("Sum is %d \n",sum);
    return 0;
}