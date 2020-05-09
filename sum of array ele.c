#include<stdio.h>
int main(){
int size;
printf("Enter size of array : ");
scanf("%d",&size);
int arr[size-1],sum=0;
printf("Enter array elements : ");
for(int i=0; i<size;++i){
    scanf("%d",&arr[i]);
    sum+=arr[i];
}
printf("Sum is : %d",sum);
return 0;
}
