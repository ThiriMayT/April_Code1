#include<stdio.h>
#include<conio.h>
#define SIZE 7
int arr[SIZE] , element,position,number,i;
int main(){

printf("Enter number of elements : ");
scanf("%d",&number);

printf("Enter %d elements of Arrays : \n ",number);
for(i=0;i<number;i++){
    scanf("%d",&arr[i]);
}

printf("Array data elements are : \n ");
for(i=0;i<number;i++){
 printf("%d \n ",arr[i]) ;
}
printf("Enter the elements of Array you want to insert : ");
scanf("%d",&element);
printf("Enter the Array position that you want to insert : ");
scanf("%d",&position);//position=3
i=number - 1;//i=5
//10 20 30 40 50
//0   1  2  3  4
//when i=4, 10 20 30 40 50 50
//when i=3, 10 20 30 40 40 50
//arr[4]=arr[3]-40
//when i=2, 10 20 30 30 40 50
//arr[3]=arr[2]-30
while(position<=i){//3<=5 3<=4 3<=3
arr[i+1]=arr[i];//arr[6]=60  ၀10 ၁20 ၂30 ၃40 ၄50 ၅60
            //arr[5]=50     10   20 30  40  50  50
            //arr[4]=40     10   20  30  40  40 50
i--;
}//10 20 30 30 40 50
arr[position]=element;
 //arr[3]=11
printf("After inserting array are : \n ");
for(i=0;i<number+1;i++){
    printf("%d \n ",arr[i]);
}

return 0 ;
















}
