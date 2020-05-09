#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=b=c=0;
    printf("enter a number you want to reverse:");
    scanf("%d",&a);
    while(a!=0){
        b=a%10;
        a/=10;
       c=(b*10)+(c*10);
    }
    printf("the reversed number is:%d",c/10);
}
