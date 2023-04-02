#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


//struct User_input{

//char *exactT1[10];
//char *exactT2[10];
//char *exactT3[10];

void myProbability(int p ,int f ,int r );

int main(){

//struct User_input exactT1;
//struct User_input exactT2;

//#define POSSIBLE 8
int p;
int f;
//int eT;
char tail[100];
char totalArray[100];
//int eH;
//int nT;
//int nH;
//int noOf_head;
//int noOf_tail;
int Probability_output;
int r;




printf("Welcome to Probability Program! \n ");
printf("Formula is : \n");
printf("Probability = no of favourable outcomes / no of possible outcomes \n");
//printf("\n \n");
printf("Here is sum to solve.\n");
//printf("\n \n ");

printf("Three coins are tossed simultaneously . \n \n All possible outcomes are \n \n  ");
printf(" \nHHH--HHT--HTH--HTT\n \n");
printf(" \nTTT--TTH--THT--THH\n \n ");
printf("Remind that \n");
printf(" \n H for 'head' \n T for 'tail'\n");
printf("\n Find probability of  \n");
printf("1. exactly one tail\n");
printf("2. exactly one head\n");
printf("3. no tail\n");
printf("4. no head\n");

printf("Let's get started!\n");
printf("Enter number of all possible outcomes: ");
scanf("%d",&p);
 while(p!=8){
    printf("Wrong Answer!\n");
    printf("Enter number of all possible outcomes again: ");
    scanf("%d",&p);
}
switch(p){
case 8: printf("Right!\n No of possible outcomes : %d\n",p);
}

printf("\nLet's go to no.1.\n  P(exactly one tail)\n\n");

char tailone[10];
char tailtwo[10];
char tailthree[10];
char myTail[100];
char myTail1[100];
char myTail2[100];

printf("Check the process\n \n  ");
printf(" \nHHH--HHT--HTH--HTT\n \n");
printf(" \nTTT--TTH--THT--THH\n \n ");


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
 printf("The number of favourable outcomes : %d ",f);



int rValue=myProbability(a,b,c);
printf("The probability is : %d ", returnValue);
}





return 0;
}
int  myProbability(int a,int b, int c){
c=a/b;
return c;

}






