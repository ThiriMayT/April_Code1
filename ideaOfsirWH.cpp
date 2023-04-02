#include<stdio.h>
#include<stdlib.h>
void Insert();
void loading();
void Display();
int arr[100];

int main(){
Insert();
loading();
Display();
    return 0;
}

void Insert(){
FILE *fptr;
 fptr=fopen("Hundard File.txt","w");
 fclose(fptr);

 FILE *fptr1;
 fptr1=fopen("Hundard File.txt","a");

 if(fptr1==NULL){
    printf("file cannot open!");
    exit(1);
 }else{

for(int i=1;i<=100;i++){
    fprintf(fptr1,"%d\n",i);
}

 }
 fclose(fptr1);
}

void loading(){
    int index=0;
FILE *fptr;
fptr=fopen("Hundard File.txt","r");
int data=0;
while(fscanf(fptr,"%d",&data)==1){
    arr[index]=data;
    index++;
}
fclose(fptr);

}


void Display(){
    
  
for(int i=0;i<100;i++){
    printf("data : %d\n",arr[i]);
}

}

/* data : 49  it means 1(%c) ->49(%d)
data : 10     it means \n(%c) ->10(%d)

data : 50(%d)   2(%c)     
data : 10

data : 51
data : 10

data : 52
data : 10

data : 53
data : 10

data : 54
data : 10

data : 55
data : 10    
*/