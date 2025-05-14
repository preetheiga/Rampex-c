#include <stdio.h>
int main()
{
    char op;
    int a=10;
    int b=2;
    printf("Enter a operator:");
    scanf("%c",&op);
    switch(op)
    {
        case '+':
        printf("Result:%d \n",a+b);
        break;
        case '-':
        printf("Result:%d \n",a-b);
        break;
        case '*':
        printf("Result:%d \n",a*b);
        break;
        case '/':
        printf("Result:%d \n",a/b);
        break;
        default:
        printf("Invalid operator");
    }
}