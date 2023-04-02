#include<stdio.h>
#include<stdlib.h>
struct IDprogram{

char *real_name;
char *nick_name;
int *password;
int *age;
int *phone_number;

};

int main(){

struct IDprogram *MayThu;

MayThu=(struct IDprogram*) malloc (sizeof(struct IDprogram));

MayThu->real_name="Thiri May Thu";
MayThu->nick_name="Victoria";
MayThu->password=123456789;
MayThu->age=19;
MayThu->phone_number=987654321;

printf("Your real name :%s \n",MayThu->real_name);
printf("Your nick name :%s \n ",MayThu->nick_name);
printf("Your password:%d \n ",MayThu->password);
printf("Your age :%d \n ",MayThu->age);
printf("Your phone number : %d \n",MayThu->phone_number);

return 0;
}
