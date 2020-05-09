#include<stdio.h>
#include<string.h>
int main(){

char name[20],fname[20];
int test;

printf("Enter your name : ");
gets(name);

printf("Enter your friend's name : ");
gets(fname);

printf("Length of your name : %d\n",strlen(name));

if(strlen(name)>strlen(fname))
    printf("Your name is bigger\n");
else if(strlen(name)<strlen(fname))
        printf("Your  friend's name is bigger\n");
else
        printf("Both names are of equal length\n");
printf("Your name in reverse order : ");
for(int i=strlen(name);i>=0;--i)
    printf("%c",name[i]);
printf("\nYour name in uppercase : %s\n",strupr(name));
printf("Your name in lowercase : %s\n",strlwr(name));
for(int i=0,j=strlen(name)-1;name[i]!='\0';++i,--j)
    if(name[i]!=name[j])
        test=0;
if(test!=0)
    printf("Your name is a palindrome");
else
        printf("Your name is  not a palindrome");

return 0;
}
