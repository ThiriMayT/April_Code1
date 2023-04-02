#include<stdio.h>
#include<stdlib.h>
int arr[100];
void Inserting();
void Loading();
void Displaying();
int main(){

Inserting();
 Loading();
 Displaying();

    return 0;
}
void Inserting(){
FILE *fptr;
fptr=fopen("Victoria100.txt","w");
fclose(fptr);

FILE *fptr1;
fptr1=fopen("Victoria100.txt","a");
for(int i=1;i<=100;i++){
    fprintf(fptr1,"%d%c",i,'\n');
}
fclose(fptr1);
}
void Loading(){
int index=0;
int data=0;
FILE *fptr2;
fptr2=fopen("Victoria100.txt","r");
while(fscanf(fptr2,"%d",&data)==1){
    arr[index]=data;
    index++;
}

fclose(fptr2);

}
void Displaying(){
    for(int j=0;j<100;j++){
        printf("Data : %d\n",arr[j]);
    }
}