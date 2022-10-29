#include <stdio.h>
#define pi 3.1415926
int main()
{
    float R,h;
    long double V;
    scanf("%f%f",&R,&h);
    printf("R=%f,h=%f\n",R,h);
    V=pi*R*R*h;
    printf("体积V=%lf\n",V);
    while(1){}
    return 0;
}