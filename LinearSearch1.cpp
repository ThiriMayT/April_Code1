#include<stdio.h>
int main(){
int arr[10];
int loc[10];
int count;
int maxNum;
int maxCount=0;
int oddNum[10];
int evenNum[10];

for(int i=0;i<10;i++){
    printf("Enter a number:");
    scanf("%d",&arr[i]);
    
}
for(int a=0;a<10;a++){
    for(int j=a+1;j<10;j++){
 if(arr[a]==arr[j]){
    //loc[count]=arr[j];
    count++;
 }
 
 
 }
}

printf("Most ocurring element found  times:%d  ",count);

    return 0;
}