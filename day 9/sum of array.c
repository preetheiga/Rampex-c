#include <stdio.h>
int main()
{
    int i,j,sum;
    int arr[2][3]={{1,2,3},{4,5,6}};
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
            sum+=arr[i][j];
        }
        printf("= %d \n",sum);
    }
    return 0;
}