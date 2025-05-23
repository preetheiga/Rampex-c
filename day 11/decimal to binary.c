#include <stdio.h>
void bin(int n)
{
    if(n==0) 
    {
        return; 
    }
        bin(n/2);
        printf("%d",n%2);
    
}
int main()
{
      bin(15);
      return 0;
}