
#include<stdio.h>
int main(){


int numberA[2];


printf("Size of array : %d \n ",sizeof(numberA));


int arraySize = (sizeof(numberA)/sizeof(numberA[0]));

printf("Actually size of array is : %d \n",arraySize);

return 0;

}
