#include<stdio.h>
int main(){
    int arr[100];
int num=0;
FILE *fptr;
fptr=fopen("100File.txt","w");
if(fptr==NULL){
printf("File cannot open!");
}else{
for(int i=1;i<=10;i++){
    printf("Enter a number:");
    scanf("%d",&arr[i]);
}
for(int j=1;j<=10;j++){
    fprintf(fptr,"%d%c",arr[j],'\n');
}
fclose(fptr);
}
    return 0;
}