#include <stdio.h>
int main()
{
    int a;
    int b;
    int sum=0;
    printf("enter a value for a:");
    scanf("%d",&a);
    printf("enter a value for b:");
    scanf("%d",&b);
    sum = a+b;
    printf("sum of a and b is %d",sum);
    return 0;
}