#include <stdio.h>
int main()
{
    int a=5,b=10;
    int *x=&a;
    int *y=&b;
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("After swapping: a=%d b=%d \n",a,b);
    return 0;
}