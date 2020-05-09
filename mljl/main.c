#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *p;
   int i=1;
   p=&i;
   printf("%d\n",&i);
   printf("%u",&i);
   return 0;
}
