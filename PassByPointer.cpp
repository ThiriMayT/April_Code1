#include<stdio.h>
void increase(int *value);
int main(){
int data=20;
int *p;
p=&data;
increase(p);
printf("%d\n",*p);
printf("%d",data);



    return 0;
}
void increase(int*value){

(*value)++;


}