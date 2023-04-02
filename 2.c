#include<stdio.h>
int main(){
int i=0;
int y=0;


for(i=0;i<10;i++){

 for(int ii=0;ii<i+1;ii++){

    printf(" *");
 }
  for(y=0;y<(i*2)+2;y++){

    printf("#");
  }

   printf("\n");
for(int a=0;a<10*6-(i*6)+6;a++){
printf(" ");
}
}
  return 0;
}
