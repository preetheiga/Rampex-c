#include <stdio.h>
int main()
{
    int mark;
    printf("Enter a mark:");
    scanf("%d",&mark);
    if(mark>=35)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
    
}