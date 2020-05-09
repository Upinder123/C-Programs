#include<stdio.h>
int main(){
int count=0;
char name[20],ch;
printf("Enter string : ");
gets(name);
printf("Enter character to search for : ");
scanf("%c",&ch);
for(int i=0; name[i]!=0;++i)
if(name[i]==ch)
++count;
printf("No. of times %c is present : %d",ch,count);
return 0;
}
