#include <stdio.h>
int main()
{
    int A=1234,a,b,c,d;
    a=A/1000;
    b=A%1000/100;
    c=A/1000+2;
    d=A%10;
    printf("千位=%d\n",a);
    printf("百位=%d\n",b);
    printf("十位=%d\n",c);
    printf("个位=%d\n",d);
    return 0;
 }