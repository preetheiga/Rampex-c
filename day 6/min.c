#include <stdio.h>
int main()
{
    int min;
    int arr[]={1,2,3,4,5};
    min=arr[0];
    for(int i=1;i<5;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("min=%d \n",min);
    return 0;
}