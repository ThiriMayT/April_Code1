#include "stdio.h"
#include "stdlib.h"
int main(){
    int number=0;
    int numArr[100];
    FILE *fptr;
     fptr= fopen("NCC Special.txt","a");
  if(fptr==NULL){
      printf("File does not open!");
      exit(0);
  }
for(int i=0;i<100;i++){
    fprintf(fptr,"%d%c",i+1,'\n');
}
     fptr= fopen("NCC Special.txt","r");

for(int x=0;x<100;x++){
    fscanf(fptr,"%d",&numArr[x]);
    printf("Data : %d \n",numArr[x]);
}
    fclose(fptr);
    return 0;
}
