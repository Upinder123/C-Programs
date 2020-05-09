#include<stdio.h>
int main(){
int size, esum=0,osum=0;
printf("Enter size of array : ");
scanf("%d",&size);
int arr[size-1];
printf("Enter array elements : ");
for(int i=0; i<size;++i){
    scanf("%d",&arr[i]);
    if((i%2)==0)
        esum+=arr[i];
    else osum+=arr[i];
}
printf("Sum of even elements is : %d\n",esum);
printf("Sum of odd elements is : %d",osum);

return 0;
}
