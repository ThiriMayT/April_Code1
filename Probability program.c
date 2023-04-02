#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void myProbability(int a ,int b );

int main(){
int p;
int f;
char tail[100];
char totalArray[100];
int noOf_head;
int userChoice;
int Probability_output;
int r;




printf("Welcome to Probability Program! \n ");
printf("Before we start,we should know that there are 8  possible outcomes when 3 coins are tossed simultaneously.\n");
printf("Enter number of all possible outcomes: ");
scanf("%d",&p);
while(p!=8){
 printf("Wrong answer.\n");
 printf("Please enter again\n");
 printf("Before we start,we should know that there are 8  possible outcomes when 3 coins are tossed simultaneously.\n");
 printf("Enter number of all possible outcomes: ");
scanf("%d",&p);
}
printf("Here are possible outcomes :\n");
printf(" \nHHH--HHT--HTH--HTT\n");
printf(" \nTTT--TTH--THT--THH \n ");
printf("\nHere is question.\n");
printf("Three coins are tossed simultaneously.\nFind probability of  \n");
printf("1. exactly one tail\n");
printf("2. exactly one head\n");
printf("3. no tail\n");
printf("4. no head\n");
printf("\n");
printf("Which sum do you want to solve ?\n");
printf("Choose number:");
scanf("%d",&userChoice);



switch(userChoice){
case 1:printf("\nLet's go to no.1.\n  P(exactly one tail)\n\n");

char tailone[10];
char tailtwo[10];
char tailthree[10];
char myTail[100];
char myTail1[100];
char myTail2[100];

printf("Check the process again\n");
printf("HHH--HHT--HTH--HTT \n");
printf("TTT--TTH--THT--THH\n ");


if(p<10){
printf("Enter the element of exactly one tail: \n ");
scanf("%s",&tailone);

printf("Enter the element of exactly one tail: \n ");
scanf("%s",&tailtwo);

printf("Enter the element of exactly one tail: \n ");
scanf("%s",&tailthree);


strcpy(myTail,tailone);
strcpy(myTail1,tailtwo);
strcpy(myTail2,tailthree);

 printf("The elements of P(exactly one tail):\n");
 printf("%s\n",myTail);
 printf("%s\n",myTail1);
 printf("%s\n",myTail2);
 f=(p-5);
 printf("The number of favourable outcomes : %d \n",f);
printf("The number of possible  outcomes :%d\n",p);

printf("Probability = Number of favourable outcomes / number of possible outcomes.\n");

printf("Probability of exactly one tail : %d/%d \n",f,p);
}
break;

case 2:printf("\nLet's go to no.2.\n  P(exactly one head)\n\n");

char headone[10];
char headtwo[10];
char heathree[10];
char myHead[100];
char myHead1[100];
char myHead2[100];

printf("Check the process again\n");
printf("HHH--HHT--HTH--HTT \n");
printf("TTT--TTH--THT--THH\n ");


if(p<10){
printf("Enter the element of exactly one head: \n ");
scanf("%s",&headone);

printf("Enter the element of exactly one tail: \n ");
scanf("%s",&headtwo);

printf("Enter the element of exactly one tail: \n ");
scanf("%s",&heathree);


strcpy(myHead,headone);
strcpy(myHead1,headtwo);
strcpy(myHead2,heathree);

 printf("The elements of P(exactly one head):\n");
 printf("%s\n",myHead);
 printf("%s\n",myHead1);
 printf("%s\n",myHead2);
 f=(p-5);
 printf("The number of favourable outcomes : %d \n",f);
printf("The number of possible  outcomes :%d\n",p);

printf("Probability = Number of favourable outcomes / number of possible outcomes.\n");

printf("Probability of exactly one head : %d/%d \n",f,p);
}
break;

case 3:printf("\nLet's go to no.3.\n  P(exactly no tail)\n\n");

 char notail[10];
 char myNoTail[100];

printf("Check the process again\n");
printf("HHH--HHT--HTH--HTT \n");
printf("TTT--TTH--THT--THH\n ");
 printf("Enter the element of no tail: \n ");
scanf("%s",&notail);
 strcpy(myNoTail,notail);
 printf("The elements of P(no tail): %s\n",myNoTail);
f=(p-7);
printf("The number of favourable outcomes : %d \n",f);
printf("The number of possible  outcomes :%d\n",p);

printf("Probability = Number of favourable outcomes / number of possible outcomes.\n");

printf("Probability of no tail: %d/%d \n",f,p);


break;

case 4:printf("\nLet's go to no.4.\n  P(exactly no head)\n\n");

 char nohead[10];
 char myNoHead[100];

printf("Check the process again\n");
printf("HHH--HHT--HTH--HTT \n");
printf("TTT--TTH--THT--THH\n ");
 printf("Enter the element of no head: \n ");
scanf("%s",&nohead);
 strcpy(myNoHead,nohead);
 printf("The elements of P(no head): %s\n",myNoHead);
f=(p-7);
printf("The number of favourable outcomes : %d \n",f);
printf("The number of possible  outcomes :%d\n",p);

printf("Probability = Number of favourable outcomes / number of possible outcomes.\n");

printf("Probability of no head: %d/%d \n",f,p);
break;
}
printf("Probability Program is ended!");
printf("Thank you for solving problems");
return 0;
}







