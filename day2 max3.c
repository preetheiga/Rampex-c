#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter a value for a:");
    scanf("%d",&a);
    printf("Enter a value for b:");
    scanf("%d",&b);
    printf("Enter a value for c:");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("a is greater");
    }
    else if (b>a && b>c)
    {
        printf("b is greater");
    }
    else
    {
        printf("c is greater");
    }
    return 0;
}