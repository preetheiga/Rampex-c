#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter a value for a:");
    scanf("%d",&a);
    printf("Enter a value for b:");
    scanf("%d",&b);
    if(a>b)
    {
        printf("a is greater");
    }
    else
    {
        printf("b is greater");
    }
    return 0;
}