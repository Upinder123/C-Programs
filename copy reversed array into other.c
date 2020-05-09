#include<stdio.h>
void main(){
int size;
printf("Enter number of elements : ");
scanf("%d",&size);
int arr[size-1],rarr[size-1];
printf("Enter elements : \n");
for (int i=0; i<size;++i)
    scanf("%d",&arr[i]);
for(int i= size -1,j=0;j<size;--i,++j)
    rarr[i]=arr[j];
printf("Reversed array is : \n");
for (int i=0; i<size;++i)
    printf("%d ",rarr[i]);

}
