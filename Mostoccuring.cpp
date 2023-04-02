#include<stdio.h>
int main(){
int arr[10]={11,22,11,44,11,55,11,77,11,11};
int count=1;
int maxCount=0;
int maxNum;

for(int j=0;j<10;j++){

for(int a=j+1;a<10;a++){
if (arr[j]==arr[a]){
    count++;
   //printf("Common Position : %d \n",count); 
}

if(count>maxCount){
maxNum=arr[j];

}

}
}
printf("We found %d as %d times ",maxNum,count);
printf("Most Ocurring Element is %d ",maxNum);
    return 0;
}