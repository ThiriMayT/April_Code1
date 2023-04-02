#include<stdio.h>
int main(){

char data[5]={'a','b','c','d','e'};
char *ptr;
ptr=&data[3];
 printf("Pointer value = %d\n",*ptr);
  printf("Pointer(ptr+1) value = %c\n",*(ptr+1));
   printf("Pointer(ptr-1) value = %c\n",*(ptr-1));
    return 0;
}