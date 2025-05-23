#include <stdio.h>
int main()
{
    int a;
    printf("Enter a value for a:");
    scanf("%d",&a);
    int *b=&a;
    printf("Pointer is %p \n",b);
    return 0;
}