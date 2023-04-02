#include<stdio.h>
#define SIZE 6
int main(){

int arr[SIZE],number,position,i;
printf("Enter number of elements :  ");
scanf("%d",&number);

printf("Enter %d elements of array :\n",number);
for(i=0;i<number;i++){
    scanf("%d",&arr[i]);
}
printf("Array data elements are : \n ");
for(i=0;i<number;i++){
    printf("%d \n ",arr[i]);
}

printf("Enter the position of elements you want to delete : ");
scanf("%d",&position);
i=position+1;
while(i<=number-1){
    arr[i-1]=arr[i];
    printf("Array place is %d \n  ",arr[i-1]);
    i++;
}

printf(" \n After deleting array is : \n ");
for(i=0;i<number-1;i++){
    printf("%d ",arr[i]);
}
return 0;

}
