#include <stdio.h>
int main()
{
    int a=1;
    for(a=1;;a=a*(a+1))
    {
        printf("a=%d",a);
    }
    return 0;
}