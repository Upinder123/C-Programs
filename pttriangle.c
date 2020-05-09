#include<stdio.h>
int main ()
{
    int i,j,n;
    printf("enter n");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-i-2;j++)
        {
            printf(" ");

        }
        for(j=n-i-1;j<=i;j++)
        {
            printf(" 1");
        }
        printf("\n");
    }
}