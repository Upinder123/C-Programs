#include<stdio.h>

int main()
{
int fact(int a)
{
    int i, factorial=1;
    for( i=1; i<=a; i++)
{factorial=factorial*i;
}
return factorial;
}
int rows, value,n,k;
printf("THE PASCAL'S TRIANGLE \n");
    printf("rows:");
    scanf("%d",& rows) ;

for (k=0;k<=rows;k++)
{
    for (n=0;n<=k;n++)

   {

    value= fact(k)/(fact(n)*fact((k-n)));
     printf("%d \t", value);
   }
    printf("\n");
}
