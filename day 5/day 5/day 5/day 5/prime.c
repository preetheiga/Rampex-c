#include <stdio.h>
int main()
{
     int i;
     int fact=1;
     for(i=1;i<=10;i++)
     {
          fact*=i;
     }
     printf("The factorial is: %d\n",fact);
     return 0;
}