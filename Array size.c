#include<stdio.h>
int main(){
int start_tab[2];
    printf("size of an array: %d\n", sizeof(start_tab));
int countOfElement=sizeof(start_tab) / sizeof(start_tab[0]);
printf("Count of element = %d",countOfElement);
return 0;
}
