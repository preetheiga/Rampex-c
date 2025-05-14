#include <stdio.h>
int main()
{
    int gross,basic,hra,da;
    printf("Enter a basic value:");
    scanf("%d",&basic);
    printf("Enter a hra value:");
    scanf("%d",&hra);
    printf("Enter a da value:");
    scanf("%d",&da);
    gross=basic+hra+da;
    printf("The gross value is: %d",gross);
    return 0;
}