// malloc = memory allocation

//m_size=(type) malloc (sizeof(int))
#include<stdio.h>
#include<stdlib.h>

struct PersonalInfo{
  char *name;
  char *hobby;
  char *dream;  //important thing is to put *
                //if you don't, output is {User name is : NULL }
  int *age;
  char *birthday;
};
int main(){

struct PersonalInfo*Victoria;

Victoria=(struct PersonalInfo*)malloc(sizeof(struct PersonalInfo));
// don't put () in type , it gonna be error
// example - Victoria=(struct (PersonalInfo)*)malloc(sizeof(struct PersonalInfo));<-------- Errorrrrr!!!!!!!

Victoria->name="MayThuThiri";
Victoria->hobby="StartToFondOfCoding";
Victoria->dream="SoftwareEnginner";
Victoria->age=19;
Victoria->birthday="October10";



printf("User name is : %s\n ",Victoria->name);
printf("User hobby is : %s\n ",Victoria->hobby);
printf("User dream is : %s\n ",Victoria->dream);
printf("User age is : %d\n ",Victoria->age);
printf("User birthday is : %s",Victoria->birthday);



return 0;




}
