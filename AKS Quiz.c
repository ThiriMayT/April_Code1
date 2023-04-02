#include "stdio.h"
#include "stdlib.h"
#include "time.h"


int main()
{
    int ans=0;
    int attempts = 3;
    int quiz = 5;
    int scores = 0;
    int choice[10];
    int key;
    printf("\t\t Welcome to Programming Quiz!\n");
    printf("You have to answer %d questions:\n",quiz);
    printf("You have only 3 chances to wrong: \n");
    printf("To be continue game, enter 777 or  000 to quit: \n");
    scanf("%d",&key);
    if(key==777) {

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
    }else if (key==000){
        printf("Good Bye from Game!!!");
        exit;
    }
    return 0;
}
