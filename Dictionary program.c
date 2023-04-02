#include<stdio.h>
int main(){
char i;
int n=0;
//#define PAGE 12
int a=12;
printf("open dictionary \n");
while(i!='logic'){

printf("Enter the word you first see when u open the dictionary :");
scanf("%s",&i);



    printf("Enter the page number where you reach now : \n");
    scanf("%d",&n);

    if(n<=a){
        printf("PLease turn backward to find the word of LOGIC! \n ");

    }
      else{
    printf("PLease turn forward to find the word of LOGIC!\n");
    }



 }
   printf("Finally you found the word of LOGIC!") ;
return 0;
}
