#include<stdio.h>
int main(){

int count=0;char str[50];

printf("Enter line : ");
gets(str);
for(int i=0;str[i]!='\0';++i)
    if(str[i]==' ')
        ++count;

printf("No. of words : %d",(count+1));


return 0;
}
