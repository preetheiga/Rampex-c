#include <stdio.h>
void greet( const char name[],const char role[])
{
    printf("Welcome %s as a %s \n",name,role);
}
int main()
{
    greet("Tamilarasi","Project Manager");
    return 0;
}
    