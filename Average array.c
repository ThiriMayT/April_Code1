#include<stdio.h>
int main(){

int data[100],nData=0,sum=0,average=0;
printf("Enter number of data : min :2 max: 100 : ");
scanf("%d",&nData);
for(int i=0;i<nData;i++){
    printf("Enter data : ");
    scanf("%d",&data[i]);
}

for(int ii=0;ii<nData;ii++){
    sum=sum+data[ii];
}


average = sum / nData;
printf("Average value is %d",average);
return 0;

}
