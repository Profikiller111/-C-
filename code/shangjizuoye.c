#include <stdio.h>
#define SCHOOLNAME "重庆工程学院"
#define var 100
int main()
{
  const int STUDENTSNAMES=42;
  int x,y;
  double length,width;
  char ch='g',zh='9';
  printf("ch转化的大写字母为%c\n",ch-32);
  printf("zh转化的数字为%d\n",zh-48);
  int a=9,b;
     b=++a;
     printf("a=%d,b=%d\n",a,b);
     b=a++;
     printf("a=%d,b=%d\n",a,b);
     b=--a;
     printf("a=%d,b=%d\n",a,b);
     b=a--;
     printf("a=%d,b=%d\n",a,b); 
  int z=3;
  z+=z-=z*=z;
  printf("z=%d",z);
  int S=258,h,i,j;
  h=S/100;
  i=S%100/10;
  j=S%10;
  printf("百位=%d",h);
  printf("十位=%d",i);
  printf("个位=%d",j);
  printf("所有位之和=%d",h+i+j);
  int t=6,g=9,temp;
  temp=t;
  t=g;
  g=temp;
  printf("t=%d,g=%d\n",t,g);
  printf("SCHOOLNAME=%s",SCHOOLNAME);
  return 0;
}