#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void Home(struct My_crush);
struct My_crush{
char name;
char nickname;
char favfood;
int age;
int favnumber;

};

int main(){
struct My_crush John;
struct My_crush Harry;
struct My_crush Charles;

strcpy(John.name,"John Dicken");
strcpy(John.nickname,"John Dicken");
strcpy(John.favfood,"ice-cream");
strcpy(John.age,19);
strcpy(John.favnumber,10);

strcpy(Harry.name,"Harry Style");
strcpy(Harry.nickname,"Harry boo");
strcpy(Harry.favfood,"strawberry cake");
strcpy(Harry.age,20);
strcpy(Harry.favnumber,22);

strcpy(Charles.name,"Charles Puth");
strcpy(Charles.nickname,"Mr.Charles");
strcpy(Charles.favfood,"ice coffee");
strcpy(Charles.age,22);
strcpy(Charles.favnumber,16);

Home(struct John);
Home(Harry);
Home(Charles);


return 0;
}

void Home(struct My_crush mc){

printf("Crush name : %s \n",mc.name);
printf("Crush nickname : %s \n",mc.nickname);
printf("Crush favfood : %s \n",My_crush.favfood);
printf("Crush age : %d \n",My_crush.age);
printf("Crush favnumber : %d\n",My_crush.favnumber);


};












