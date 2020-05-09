#include <stdio.h>

  main(){
  int a,b,c,d;

  printf("Enter the seconds :");
  scanf("%d",&a);
  b=(a-(c*3600))/60;
  c= (a/3600);
  d=((a-(c*3600))-(b*60));
  printf("%d hours,%d min, %d sec",c,b,d);
}
