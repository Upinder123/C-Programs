#include <stdio.h>

int main()
{
   int a,b,c;
   a = 0;
   b = 300;

   while(a<=b){
    c=5*(a-32)/9;
    printf("%d\t%d\n",a,b);
    a++;

   }
   return 0;
}
