#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int db[100];
int dbMoney[100];
int main(){
    int key=10;
    int age=0;
    int option=0;
    int userId=0;
    int userId2=0;
    //int userMoney=0;
    //int fixMoney=1000;
    int flag=0;
    int global_flag=0;
    int dbIndex=0;
   // int cat=0;
    while ( key<=10){

        printf("Welcome to our game:\n");
        printf("Enter your age:");
        scanf("%d",&age);
        if(age>17){

            printf("you can play game!\n");
            while (1) {

                printf("Press 1 to Login!\nPress 2 to Register:\nPress 3 to Complete Quit:\nPress 4 to Back:");
                scanf("%d", &option);

                while (1) {
                    if (option == 1) {
                        printf("This is Login\n");
                        printf("Enter your id:");
                        scanf("%d", &userId);

                        for (int i = 0; i < 100; i++) {

                            if (db[i] == userId) {
                                flag = 1;
                            }

                        }
                        while (1) {
                            if (flag == 1) {
                                printf("You Can play game:\n");
                                int gameChoice;
                                printf("Press 1 for [CTG] game \n Press 2 for Quiz Time\n ");
                                printf("Enter ur option on kind of games: ");
                                scanf("%d", &gameChoice);
                                if (gameChoice == 1) {
                                    srand(time(NULL));
                                    int random = 0;
                                    char Ai;
                                    char ans;
                                    char myArr[3] = {'c', 't', 'g'};
                                    int user = 1000;
                                    int ai = 1000;
                                    int bet = 0;
                                    printf("\nWelcome to our [CTG] Game!\n\n");

                                    while (true) {
                                        printf("You now have %d\n", user);
                                        printf("Ai now have %d\n", ai);
                                        while (true) {
                                            printf("Bet : ");
                                            scanf("%d", &bet);
                                            if (bet <= user) {
                                                user = user - bet;
                                                ai = ai - bet;
                                                break;
                                            } else {
                                                printf("Not enough money!\n");
                                            }

                                        }

                                        while (true) {
                                            printf("\n[c] for captain!\n[t] for tiger\n[g] for gun\n");
                                            printf("Choose Your Option : ");
                                            scanf(" %c", &ans);
                                            if (ans == 'c' || ans == 'g' || ans == 't') {
                                                break;
                                            } else {
                                                printf("\nInvalid Option!\n");
                                            }
                                        }

                                        random = rand() % 3;
                                        Ai = myArr[random];

                                        if (ans == 'c' && Ai == 'c') {
                                            printf("You two both have same score:\n");//tie
                                            user = user + bet;
                                            ai = ai + bet;
                                        } else if (ans == 'c' && Ai == 't') {
                                            printf("You Win:\n"); //win
                                            user = user + bet * 2;
                                        } else if (ans == 'c' && Ai == 'g') {
                                            printf("You Win:\n");//lose
                                            user = user + bet * 2;
                                        } else if (ans == 't' && Ai == 'c') {
                                            printf("You Win:\n");//win
                                            user = user + bet * 2;
                                        } else if (ans == 't' && Ai == 'g') {
                                            printf("You Lose:\n");//lose
                                            ai = ai + bet * 2;
                                        } else if (ans == 't' && Ai == 't') {
                                            printf("You two both have same result: \n");//tie
                                            user = user + bet;
                                            ai = ai + bet;
                                        } else if (ans == 'g' && Ai == 'g') {
                                            printf("You two both have same result:\n");//tie printf
                                            user = user + bet;
                                            ai = ai + bet;
                                        } else if (ans == 'g' && Ai == 't') {
                                            printf("You Win:\n");  //win
                                            user = user + bet * 2;
                                        } else if (ans == 'g' && Ai == 'c') {
                                            printf("You Lose:\n"); //win
                                            ai = ai + bet * 2;
                                        }

                                        // display answer
                                        if (ans == 'c') {
                                            printf("Your option is Captain\n");
                                        } else if (ans == 't') {
                                            printf("Your option is Tiger\n");
                                        } else if (ans == 'g') {
                                            printf("Your option is Gun\n");
                                        }
                                        if (Ai == 'c') {
                                            printf("Ai option is Captain\n\n");
                                        } else if (Ai == 't') {
                                            printf("Ai option is Tiger\n\n");
                                        } else if (Ai == 'g') {
                                            printf("Ai option is Gun\n\n");
                                        }

                                        if (user < 0 || user == 0) {
                                            printf("\n\nFinally,you lose:\n\n"); // finally lose
                                            // printf("\n\nFinally lose\n\n");
                                            break;
                                        } else if (ai < 0 || ai == 0) {
                                            //finally win
                                            printf("\n\nFinally, you win\n\n");
                                            break;
                                        }

                                    }

                                } else if (gameChoice == 2) {

                                    int ans = 0;
                                    int attempts = 3;
                                    int quiz = 5;
                                    int scores = 0;
                                    int choice[10];
                                    int key;
                                    printf("\t\t Welcome to Programming Quiz!\n");
                                    printf("You have to answer %d questions:\n", quiz);
                                    printf("You have only 3 chances to wrong: \n");
                                    printf("To be continue game, enter 777 or  000 to quit: \n");
                                    scanf("%d", &key);
                                    if (key == 777) {

                                        for (int i = 1; i <= quiz; i++) {
                                            printf("Attempt : %d\n", attempts);
                                            printf("\n\nThe Questions are coming*_*_*_*_*_\n\n");
                                            switch (i) {
                                                case 1:
                                                    printf("\n*_*_<1st Question>*_*_\n");
                                                    printf("Which company is the source of most of Elon Musk's net worth?\n");
                                                    printf("1.PayPal\n 2.SpaceX\n 3.Tesla\n 4.Zip2\n"); // condition
                                                    printf("Ans : ");
                                                    scanf(" %d", &ans);
                                                    if (ans == 3) {
                                                        printf("Correct Answer\n");
                                                        scores++;
                                                    } else {
                                                        printf("Wrong Answer\n");
                                                        printf("Real answer : Tesla\n");
                                                        attempts--;
                                                    }
                                                    break;
                                                case 2:
                                                    printf("*_*_<2nd Question>*_*_\n");
                                                    printf("Where was Elon Musk born in 1971?\n");
                                                    printf("1. Canada \n 2.New York \n  3.Brazil \n 4.South Africa \n"); // condition
                                                    printf("Ans : ");
                                                    scanf(" %d", &ans);
                                                    if (ans == 4) {
                                                        printf("Correct Answer\n");
                                                        scores++;
                                                    } else {
                                                        printf("Wrong Answer\n");
                                                        printf("Real answer : Southn Africa\n");
                                                        attempts--;
                                                    } // quiz

                                                    // condition
                                                    break;
                                                case 3:
                                                    printf("*_*_<3rd Question>*_*_\n");
                                                    printf("Which philosopher is best known for his statement cogito ergo sum?\n");
                                                    printf("1.Jean-Paul Sartre  \n 2.Rene Descartes\n  3.Socrates \n 4.Plato \n"); // condition
                                                    printf("Ans : ");
                                                    scanf(" %d", &ans);
                                                    if (ans == 2) {
                                                        printf("Correct Answer\n");
                                                        scores++;
                                                    } else {
                                                        printf("Wrong Answer\n");
                                                        printf("Real answer : Rene Descartes\n");
                                                        attempts--;
                                                    } // quiz
                                                    break;
                                                case 4:
                                                    printf("*_*_<4th Question>*_*_\n");
                                                    printf("What is the subject of Plato's \"The Symposium?\n");
                                                    printf("1.Love\n 2.Death\n  3.War \n 4.Justice\n"); // condition
                                                    printf("Ans : ");
                                                    scanf(" %d", &ans);
                                                    if (ans == 1) {
                                                        printf("Correct Answer\n");
                                                        printf("During the symposium,\n Phaedrus suggests that love is one of the oldest and strongest forces and that it inspires people to behave with good morals\n");
                                                        scores++;
                                                    } else {
                                                        printf("Wrong Answer\n");
                                                        printf("Real answer :Love \n");
                                                        printf("During the symposium,\n Phaedrus suggests that love is one of the oldest and strongest forces and that it inspires people to behave with good morals\n");
                                                        attempts--;
                                                    } // qu
                                                    break;
                                                case 5:
                                                    printf("*_*_<5th Question>*_*_\n");
                                                    printf("Who is the first inventor of C programming language?\n");
                                                    printf("1.James Gosling  \n 2.Guido van Rossum \n  3. Dennis M. Ritchie  \n 4.Mark Zuckerberg\n"); // condition
                                                    printf("Ans : ");
                                                    scanf(" %d", &ans);
                                                    if (ans == 3) {
                                                        printf("Correct Answer\n");
                                                        scores++;
                                                    } else {
                                                        printf("Wrong Answer\n");
                                                        printf("Real answer :  Dennis M. Ritchie\n");
                                                        attempts--;
                                                    } // q
                                                    break;
                                                default:
                                                    printf("There is no question!\n");
                                                    break;
                                            }
                                            //print scores
                                            printf("Score : %d\n", scores);
                                            if (attempts == 0 || attempts < 0) {
                                                printf("No attempt!\n Game Over\n");
                                                break;
                                            }
                                        }
                                    } else if (key == 000) {
                                        printf("Good Bye from Game!!!");
                                        exit;
                                    }


                                }



//
                                //
                                //
                                //
                                //printf("Enter ur amount of money:");
//                                    scanf("%d",&userMoney);
//                                    for(int i=0;i<100;i++){
//
//                                        if(userMoney>fixMoney){
//                                            cat=1;
//                                        }
//                                    }
//                                    if(cat==1){
//                                        printf("You have enough money to play this game\n");
//                                        int lastMoney=fixMoney-userMoney;
//                                        printf("You've already paid.\n Your last money is %d\n ",lastMoney);
//
//                                    }else{
//                                        printf("You have not enough money to pay:\n");
//                                        printf("Plz Try again:\n");
//                                    }

                            }
                        }

                        //money /
                        {else {
                        printf("Your id is not valid:\n");
                        break;
                    }


                }
            }
                     else if(option==2){

                    if(global_flag==1){
                        break;
                    }

                    printf("This is Register:\n");

                    printf("Pls Enter your id:");
                    scanf("%d",&userId);

                    for(int i=0; i<100 ; i++){
                        if(db[i]==userId){
                            flag=1;
                        }
                    }
                    while (1){
                        if(flag==1){
                            printf("User Id Already Taken:\n");
                        } else{
                            printf("Confirm your ID: Enter: ");
                            scanf("%d",&userId2);

                            if(userId==userId2){
                                db[dbIndex]=userId;
                                dbIndex;
                                printf("Registration success:\n");
                                //registration code
                                global_flag=1;
                                //ဆက်ရေးရန်
                                break;

                            } else{
                                printf("Id not same:\n");
                                break;
                            }
                        }
                    }

                } else if(option==3){
                    exit(1);
                } else if(option == 4){
                    break;
                } else{
                    printf("Invalid Option!\n");
                }
            }

        }

    } else{
        printf("You cannot play game!\nTry Again!\n");
    }

}


return 0;
}
