#include<stdio.h>
int main(){
 int myArr[12]={10,20,30,40,30,50,60,70,80,30,90,100};
 int toFind=30;
 int count=0;
  int noArr=0;
for(int i=0;i<12;i++){
 noArr++;
 if(myArr[i]==30){
    count++;
    printf("We found %d \n",toFind);
    printf("We found %d st 30 in %d array\n",count,noArr);
 }
 }
 printf("Count times = %d",count);
return 0;
}
