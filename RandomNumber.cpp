#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){

srand(time(NULL));
int arr[10];
 
printf(" 10 random numbers : \n ");
for (int i=0;i<10;i++){
int ranNum= rand()%10;
if(ranNum==0){
ranNum+=ranNum;
}

printf("%d\n",ranNum);
}

    return 0;
}