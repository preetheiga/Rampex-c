#include <stdio.h>
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int multi(int x,int y)
{
    return x*y;
}
int div(int x,int y)
{
    return x/y;
}
int main()
{
     printf("Addition : %d \n",add(4,2));
     printf("Subraction : %d \n",sub(4,2));
     printf("Multiplication : %d \n",multi(4,2));
     printf(" Division : %d \n",div(4,2));
     return 0;
}