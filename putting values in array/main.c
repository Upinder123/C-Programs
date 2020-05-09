#include <stdio.h>
#include <stdlib.h>

int main()
{ int a[25];
  int i=0;
  while(i<=24){
    a[i]=i+1;

    printf("%d\n",a[i]); //i++ must be done after printing as it will print garbage
    i++;

  }
}
