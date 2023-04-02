#include<stdio.h>
int main(){

int i=0;
int j=10;
int x=10;
int y=0;

for(i=0;i<10;i++){

  for(x=0;x<i+1;x++){
    printf("*");
  }
   for(y=0;y<10;y++){
    printf("#");
   }

    printf("\n");


}
return 0;
}
