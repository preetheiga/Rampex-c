#include<stdio.h>
int main()
{
    int arr[]={2,5,43,67};
    int n=5,num=35,pos=1,i;
    for(i=5;i>pos;i--)
    {
       arr[i]=arr[i-1];
       arr[i]=num;
       num++;
        
    }
    printf("the inserted value:%d",arr[i]);
}