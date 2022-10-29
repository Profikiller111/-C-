#include "stdio.h"
int main()
{
    int foot;
    int inch;
    scanf("%d %d",&foot,&inch);
    printf("身高是%d米\n",(foot+inch/12)*0.3048);
}