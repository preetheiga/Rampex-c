#include <stdio.h>
int main()
{
    int a=7;
    int b=5;
    int *x=&a;
    int *y=&b;
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("After swapping a=%d and b=%d \n",a,b);
    return 0;
}