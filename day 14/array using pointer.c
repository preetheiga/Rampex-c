#include <stdio.h>
int main()
{
    int arr[]={30,25,78,60,50};
    int *ptr=arr;
    
    for(int i=0;i<5;i++)
    {
        printf("arr[%d] = %d\n",i,*(ptr+i));
    }
    return 0;
}