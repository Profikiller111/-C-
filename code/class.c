#include <stdio.h>
int main()
{
    int temp,a=100,b=200;
    temp=a;
    a=b;
    b=temp;
    printf("a=%d",a);
    printf("b=%d",b);
    return 0;
}c