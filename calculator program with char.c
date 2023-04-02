#include<stdio.h>
int main(){

int i=0;
int firstNumber=0;
int secondNumber=0;
int result=0;



char operation;



int funAdd(firstNumber,secondNumber);
int funSub(firstNumber,secondNumber);
int funMulti(firstNumber,secondNumber);
int funDivi(firstNumber,secondNumber);

while(i==NULL){

  printf("Welcome to our calculator program ; \n");
  printf("Enter your operation :");
  scanf(" %c",&operation);

  printf("Enter your first number :");
  scanf("%d",&firstNumber);
  printf("Enter your second number :");
  scanf("%d",&secondNumber);

  switch(operation){

  case'+':
      printf("Result is %d \n",funAdd(firstNumber,secondNumber));
      break;

  case'-':
    printf("Result is %d \n",funSub(firstNumber,secondNumber));
    break;

  case'*':
    printf("Result is %d \n",funMulti(firstNumber,secondNumber));
    break;

  case'/':
    printf("Result is %d /n",funDivi(firstNumber,secondNumber));
    break;
  default:
    printf("Invalid Operation /n");
  }

}


return 0;
}

int funAdd(firstNumber,secondNumber){
int result = firstNumber + secondNumber;
return result;
}
int funSub(firstNumber,secondNumber){
int result = firstNumber - secondNumber;
return result;
}
int funMulti(firstNumber,secondNumber){
int result = firstNumber * secondNumber;
return result;
}
int funDivi(firstNumber,secondNumber){
int result = firstNumber /secondNumber;
return result;
}
