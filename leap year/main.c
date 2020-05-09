#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter the year you want to check:");
    scanf("%d",a);
    if(a%4==4){
        printf("this year is leap year");
        }else{
        printf("this is not a leap year");
        }
}
