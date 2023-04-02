
#include<stdio.h>

int main(){
char old_name1[100];
char old_hobby1[100];
int old_age1;
int old_personality1[100];

char new_name2[100];
char new_hobby2[100];
int new_age2;
int new_personality2[100];

printf("Welcome to replacing program!\n");
printf("You can change informations of people you want\n");
printf("Choose number one to change about your family members.\n");
printf("Enter number zero to end program.\n");
printf("\n \n");

int a;
printf("Enter your choice:  ");
scanf("%d",&a);
printf("\n \n");


 if(a==1){
 printf("So,you want to continue the program!!!\n");
 printf("Choose the members in ur family.\n");
 printf("\n \n");
 printf("1.Dad\n");
 printf("2.Mom\n");
 printf("3.Yourself\n\n");
 printf("\n \n");

 int b;
 printf("Enter one of ur family members:  ");
scanf("%d",&b);
printf("\n \n");

 if(b==1){
  printf("OK!I get it.\n\nFinally you have chosen ur Dad.\n\n I can imagine that you really love ur father so much\n\n");
  printf("\nBefore changing new informations,tell me ur old informations of ur Dad.\n");

 printf("old name:  ");
 scanf("%s",&old_name1);

 printf("old hobby:  ");
 scanf("%s",&old_hobby1);

 printf("old personality:  ");
 scanf("%s",&old_personality1);

 printf("old age:  ");
 scanf("%d",&old_age1);

 printf("Your father's old info are : \n");
 printf("\n \n");
 printf("name is %s \n",old_name1);
 printf("hobby is %s \n",old_hobby1);
 printf("personality is %s \n",old_personality1);
  printf("age is %d \n ",old_age1);

  printf("Which informations do you want to change?\n");
  int opt;
  printf("\n \n");
  printf("Choose ur options:\n name for <1> \n hobby for <2> \n personality for <3>  \n age for <4>: ");
  scanf("%d",&opt);
  printf("\n \n");

  if(opt==1){
  printf("Enter new name of ur father: ");
  scanf("%s",&new_name2);
  printf("\n \n");
  printf("You have changed ur father with new name\n");
  printf("Ur father's new name is %s \n",new_name2);
  printf("\n \n");
  printf("Choose ur another options:\n hobby for <2>\n  personality for <3>\n age for <4> \n Exist for 0: ");
  scanf("%d",&opt);
  printf("\n \n");
  }
  else if(opt==0){
    printf("\nProgram end\n");
  }



  if(opt==2){
  printf("Enter new hobby of ur father: ");
  scanf("%s",&new_hobby2);
  printf("\n \n");
  printf("You have changed ur father with new hobby\n");
  printf("Ur father's new hobby is %s ",new_hobby2);
  printf("\n \n");
  printf("Choose ur another options:\n personality for <3> \n age for <4>\n Exist for 0: ");
  scanf("%d",&opt);
  printf("\n \n");

  }else if(opt==0){
    printf("\nProgram end\n");
  }

 if (opt==3){
  printf("Enter new personality of ur father: ");
  scanf("%s",&new_personality2);
  printf("\n \n");
  printf("You have changed ur father with new personality \n");
  printf("Ur father's new personality is %s ",new_personality2);
  printf("\n \n");
  printf("Choose ur another options:\n age for <4>\n Exist for 0: ");
  scanf("%d",&opt);
  printf("\n \n");

  }else if(opt==0){
    printf("\nProgram end\n");
  }




  if (opt==4){
   printf("Enter new age of ur father: ");
  scanf("%d",&new_age2);
  printf("\n \n");
  printf("You have changed ur father with new age\n");
  printf("Ur father's new age is %d ",new_age2);
  printf("\n \n");
  printf("You've changed all of informations about ur father\n Exist for 0: ");
  scanf("%d",&opt);
  printf("\n \n");
  }
 else if(opt==0){
    printf("\nProgram end\n");
    printf("Replacing program is ended.\n");
    printf("Thanks for using our program.\n");
    printf("Have a nice day,dear user.");
  }

}


 else if (b==2){
  printf("OK!I get it.\nFinally you have chosen ur Mom.\n I can imagine that you really love ur mother so much\n");
  //printf("Before changing,your father informations are:\n name:U Than Maung\n hobby:Golfing\n age:65 \n personality:exact,helpful,ever smile,sometimes angry and so much worried about everying\n");
  printf("Before changing new informations,tell me ur old informations about ur Mom.\n");
 printf("old name:  ");
 scanf("%s",&old_name1);
 printf("old hobby:  ");
 scanf("%s",&old_hobby1);
 printf("old personality:  ");
 scanf("%s",&old_personality1);
 printf("old age:  ");
 scanf("%d",&old_age1);
 printf("Your mother's old info are : \n");
 printf("name is %s \n",old_name1);
 printf("hobby is %s \n",old_hobby1);
 printf("personality is %s \n",old_personality1);
  printf("age is %d \n ",old_age1);

printf("Which informations do you want to change?");
  //char opt[100];
  int opt;
  printf("Choose ur options:\n name for 1 or hobby for 2  or personality for 3 or age for 4: ");
  scanf("%d",&opt);
  printf("\n \n");

  if(opt==1){
  printf("Enter new name of ur mother: ");
  scanf("%s",&new_name2);
  printf("You have changed ur mother with new name\n");
  printf("Ur mother's new name is %s \n",new_name2);
  printf("Choose ur another options:\n  hobby for 2 or personality for 3  or age for 4 \n Exist for 0: ");
  scanf("%d",&opt);
  printf("\n \n");
  }
  else if(opt==0){
    printf("\nProgram end\n");
  }



  if(opt==2){
  printf("Enter new hobby of ur mother: ");
  scanf("%s",&new_hobby2);
  printf("You have changed ur mother with new hobby\n");
  printf("Ur mother's new hobby is %s \n",new_hobby2);
  printf("Choose ur another options:\n  personality for 3 or age for 4\n Exist for 0: ");
  scanf("%d",&opt);
  printf("\n \n");
  }else if(opt==0){
    printf("\nProgram end\n");
  }

 if (opt==3){
  printf("Enter new personality of ur mother: ");
  scanf("%s",&new_personality2);
  printf("You have changed ur mother with new personality \n");
  printf("Ur mother's new personality is %s\n ",new_personality2);
  printf("Choose ur another options:\n age for 4\n Exist for 0: ");
  scanf("%d",&opt);
  printf("\n \n");
  }else if(opt==0){
    printf("\nProgram end\n");
  }




  if (opt==4){
   printf("Enter new age of ur mother: ");
  scanf("%d",&new_age2);
  printf("You have changed ur mother with new age\n");
  printf("Ur mother's new age is %d \n",new_age2);
  printf("You've changed all of informations about ur mom\n Exist for 0: ");
  scanf("%d",&opt);
  printf("\n \n");
 }else if(opt==0){
    printf("\nProgram end\n");
    printf("Replacing program is ended.\n");
 printf("Thanks for using our program.\n");
 printf("Have a nice day,dear user.");
  }

 }
 else if (b==3){
  printf("OK!I get it.\nFinally you have chosen urself.\n Now,you can create the better one yourself.\n");
  //printf("Before changing,your father informations are:\n name:U Than Maung\n hobby:Golfing\n age:65 \n personality:exact,helpful,ever smile,sometimes angry and so much worried about everying\n");
  printf("Before changing new informations,tell me ur old information.\n");
 printf("old name:  ");
 scanf("%s",&old_name1);
 printf("old hobby:  ");
 scanf("%s",&old_hobby1);
 printf("old personality:  ");
 scanf("%s",&old_personality1);
 printf("old age:  ");
 scanf("%d",&old_age1);
 printf("Your  old info are : \n");
 printf("name is %s \n",old_name1);
 printf("hobby is %s \n",old_hobby1);
 printf("personality is %s \n",old_personality1);
  printf("age is %d \n ",old_age1);

printf("Which informations do you want to change?");
  //char opt[100];
  int opt;
  printf("Choose ur options:\n name for 1 or hobby for 2  or personality for 3 or age for 4: ");
  scanf("%d",&opt);
  printf("\n \n");

  if(opt==1){
  printf("Enter your new name: ");
  scanf("%s",&new_name2);
  printf("You have changed new name\n");
  printf("Ur new name is %s \n",new_name2);
  printf("Choose ur another options:\n  hobby for 2 or personality for 3  or age for 4 \n Exist for 0: ");
  scanf("%d",&opt);
  printf("\n \n");
  }
  else if(opt==0){
    printf("\nProgram end\n");
  }



  if(opt==2){
  printf("Enter your  new hobby: ");
  scanf("%s",&new_hobby2);
  printf("You have changed  new hobby\n");
  printf("Ur new hobby is %s \n",new_hobby2);
  printf("Choose ur another options:\n  personality for 3 or age for 4\n Exist for 0: ");
  scanf("%d",&opt);
  printf("\n \n");
  }else if(opt==0){
    printf("\nProgram end\n");
  }

 if (opt==3){
  printf("Enter your new personality of : ");
  scanf("%s",&new_personality2);
  printf("You have changed ur new personality \n");
  printf("Ur new personality is %s\n ",new_personality2);
  printf("Choose ur another options:\n age for 4\n Exist for 0: ");
  scanf("%d",&opt);
  printf("\n \n");
  }else if(opt==0){
    printf("\nProgram end\n");
  }




  if (opt==4){
   printf("Enter ur new age : ");
  scanf("%d",&new_age2);
  printf("You have changed new age\n");
  printf("Ur new age is %d \n",new_age2);
  printf("You've changed all of informations about yourself\n Exist for 0: ");
  scanf("%d",&opt);
  printf("\n \n");
 }else if(opt==0){
    printf("\nProgram end\n");
    printf("Replacing program is ended.\n");
 printf("Thanks for using our program.\n");
 printf("Have a nice day,dear user.");
  }

 }
}

else if (a==0){
printf("Replacing program is ended.\n");
printf("Thanks for using our program.\n");
printf("Have a nice day,dear user.");
}
return 0;
}






//void switchNames(char nameOne,char nameTwo){
 //char temp[100];
 //temp=nameOne;
 //nameTwo=





















