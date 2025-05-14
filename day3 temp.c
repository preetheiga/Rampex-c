#include <stdio.h>
int main()
{
    int temp;
    printf("Enter a temperature:");
    scanf("%d",&temp);
    if(temp<10)
    {
        printf("Jacket");
    }
    else if(temp>=10 && temp<20)
    {
        printf("Sweater");
    }
    else
    {
        printf("T-Shirt");
    }
    return 0;
}