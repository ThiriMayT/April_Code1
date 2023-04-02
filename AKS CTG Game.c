#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main()
{
    srand(time(NULL));
    int random=0;
    char Ai;
    char ans;
    char myArr[3] = {'c', 't', 'g'};
    int user = 1000;
    int ai = 1000;
    int bet=0;
    printf("\nWelcome to our [CTG] Game!\n\n");

    while(true)
    {
        printf("You now have %d\n", user);
        printf("Ai now have %d\n", ai);
        while(true)
        {
            printf("Bet : ");
            scanf("%d", &bet);
            if(bet <= user)
            {
                user = user - bet;
                ai = ai -bet;
                break;
            }else{
                printf("Not enough money!\n");
            }

        }

        while(true)
        {
            printf("\n[c] for captain!\n[t] for tiger\n[g] for gun\n");
            printf("Choose Your Option : ");
            scanf(" %c", &ans);
            if(ans == 'c' || ans == 'g' || ans == 't'){
                break;
            }else{
                printf("\nInvalid Option!\n");
            }
        }

        random = rand() % 3;
        Ai = myArr[random];

        if(ans == 'c' && Ai == 'c'){
            printf("You two both have same score:\n");//tie
            user = user + bet;
            ai = ai + bet;
        }else if(ans == 'c' && Ai == 't'){
            printf("You Win:\n"); //win
            user = user + bet*2;
        }else if(ans =='c' && Ai=='g'){
            printf("You Win:\n");//lose
            user= user + bet*2;
        }else if(ans =='t' && Ai=='c'){
            printf("You Win:\n");//win
            user = user + bet*2;
        }else if(ans=='t' && Ai=='g'){
            printf("You Lose:\n");//lose
            ai = ai + bet*2;
        }else if(ans =='t' && Ai=='t'){
            printf("You two both have same result: \n");//tie
            user = user + bet;
            ai = ai + bet;
        }else if(ans == 'g' && Ai == 'g'){
            printf("You two both have same result:\n");//tie printf
            user = user + bet;
            ai = ai + bet;
        }else if(ans == 'g' && Ai=='t'){
            printf("You Win:\n");  //win
            user = user + bet*2;
        }else if(ans =='g' && Ai=='c'){
            printf("You Lose:\n"); //win
            ai = ai + bet*2;
        }

        // display answer
        if(ans == 'c'){
            printf("Your option is Captain\n");
        }else if(ans == 't'){
            printf("Your option is Tiger\n");
        }else if(ans == 'g'){
            printf("Your option is Gun\n");
        }
        if(Ai == 'c'){
            printf("Ai option is Captain\n\n");
        }else if(Ai == 't'){
            printf("Ai option is Tiger\n\n");
        }else if(Ai == 'g'){
            printf("Ai option is Gun\n\n");
        }

        if(user < 0 || user == 0){
            printf("\n\nFinally,you lose:\n\n"); // finally lose
           // printf("\n\nFinally lose\n\n");
            break;
        }else if(ai < 0 || ai == 0){
            //finally win
            printf("\n\nFinally, you win\n\n");
            break;
        }

    }



    return 0;
}

