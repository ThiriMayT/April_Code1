#include<stdio.h>
#include<stdlib.h>

int db[100];
int main(){
int key=10;
int age;
int option;
int userId;
int flag;



while(key<=10){
 printf("Welcome to our game program\n");
 printf("Enter your age : ");
 scanf("%d",&age);

 if(age>=17){
  printf("You can play this game\n");

  while(ture){
  printf("Choose ur options\n");
  printf("Press 1 to Log in: \n Press 2 to register :\n Press 3 to Quit: \n Press 4 to Complete Stop This game\n");
  printf("Your choice : ");
  scanf("%d",&option);

  while(true){
  if(option==1){
    printf("Here is to Log in\n");
    printf("Enter your ID :");
    scanf("%d",&userId);
    for(int i=0;i<100;i++){

      if(db[100]==userId){
          flag=1;
          }
    }if(flag==1){
        printf("You can play game");
    }else{
        printf("Invaild ID \n");
        printf("You need to register\n");
    break;
    }
} else if (option==2){
  printf("Here is to Register\n");
  } else if (option==3){
      //break;

  }else if(option==4){
  exit(1);
  }else {
  printf("Invaild number")}

 }
 }
 }
 else{
 printf("You can't play this game\n");
 printf("Try again!\n");
 }
}
 return 0;
}

