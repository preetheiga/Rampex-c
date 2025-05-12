#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int temp;
    printf("enter a value for num1:");
    scanf("%d",&num1);
    printf("enter a value for num2:");
    scanf("%d",&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("after swapping num1=%d and num2=%d",num1,num2);
    return 0;
    
}