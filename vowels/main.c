#include <stdio.h>
#include <stdlib.h>

int main()
{
    char B;
    printf("Enter the alphabet:");
    scanf("%c",B);
    if((B=='a')||(B=='e')||(B=='i')||(B=='o')||(B=='u')||(B=='A')||(B=='E')||(B=='I')||(B=='O')||(B=='U'))
    {
        printf("the given alphabet is a vowel");
    }else{
        printf("the given number is not a vowel");
    }
}
