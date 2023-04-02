#include "stdio.h"
int main(){
    int i=0;
    int number=0;
    char arr[]={'A','B','C','D','E','U','F','I'};
    int a=0;
    while (a==0){
        if(arr[i]==0){
            break;
        }else{
            number++;
        }
        i++;
    }
    int index=number-1;
    printf("number of data in arr=>%d\nindex of arr=>%d\n",number,index);

}
