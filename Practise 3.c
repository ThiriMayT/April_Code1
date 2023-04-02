#include <stdio.h>

int main(){

int firstNumber=0;
int secondNumber=0;
int totalValue=0;
printf("Welcome to calculator program");
printf("Please enter first number :");
scanf("%d",&firstNumber);
printf("Your first data is %d \n",firstNumber);

printf("Please enter second number : ");
scanf("%d",&secondNumber);
printf("Your second data is %d \n",secondNumber);

totalValue = firstNumber + secondNumber;
printf("Total value is %d",totalValue);

return 0;
}
