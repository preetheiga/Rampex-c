#include <stdio.h>
int main()
{
    int max=0;
    int arr[]={3,7,9,18,10};
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("max=%d \n",max);
    return 0;
}