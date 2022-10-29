#include <stdio.h>
int main()
{
    int a,b,c,x;
    printf("请输入一个整数");
    scanf("%d",&x);
    a=x/100;
    b=x/10%10;
    c=x%10;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d",c);
    while(1){};
    return 0;
}