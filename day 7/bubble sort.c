#include <stdio.h>
int main()
{
    int arr[5] = {5, 2, 9, 1, 3};
    int temp, i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = i+1; j < 5 - i; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}