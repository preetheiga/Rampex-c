#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    int total;
    int avg;
    printf("Enter a value for a:");
    scanf("%d",&a);
    printf("Enter a value for b:");
    scanf("%d",&b);
    printf("Enter a value for c:");
    scanf("%d",&c);
    printf("Enter a value for d:");
    scanf("%d",&d);
    printf("Enter a value for e:");
    scanf("%d",&e);
    total=a+b+c+d+e;
    printf("The total mark is:%d \n",total);
    avg=total/5;
    printf("The average mark is:%d \n",avg);
    return 0;
}