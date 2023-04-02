#include<stdio.h>
void myFun(int *fData,int *sData);
int main(){
 int fData;
 int sData;
printf("Enter first data : ");
scanf("%d",&fData);
printf("Enter second data : ");
scanf("%d",&sData);

printf("Before passing,your first and second data are: %d,%d\n",fData,sData);

myFun(&fData, &sData);

printf("After passing,your first and second data are: %d,%d\n",fData,sData);
return 0;
}
void myFun(int *fData,int *sData){
int temp=*fData;
    *fData=*sData;
    *sData=temp;
}
