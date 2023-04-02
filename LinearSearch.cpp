#include<stdio.h>
int main(){

int arr[10]={44,23,44,66,77,88,77,44,1,44};
int count;
int toFind;

for(int i=0;i<10;i++){
    if (arr[i]==77){
       toFind=arr[i];
        count++;
       
      printf("\n Position : %d\n",i);
    }
}
printf("WE Found %d as %d times ",toFind,count);
//think about how to add the position of array you find the number

    return 0;
}