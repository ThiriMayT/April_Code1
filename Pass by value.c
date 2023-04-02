#include<stdio.h>
int myFun(int a, int b);
int main(){
int firstData=0;
int secondData=0;

printf("Enter first data: ");
scanf("%d",&firstData);

printf("Enter second data: ");
scanf("%d",&secondData);

myFun(firstData,secondData);
printf("Return Value is %d \n",myFun(firstData,secondData));
return 0;
}
int myFun(int a, int b){
int c=a+b;
return c;
}
