#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c=0,d;
 printf("please put in a number:");
 scanf("%d",&a);
  while(a!=0){
    b=a%10;
    c=b+c;
  }
  d=(a-a/10);
  printf("the sum is %d",a+b+c+d);
}
