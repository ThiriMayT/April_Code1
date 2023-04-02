
#include<stdio.h>
#include<stdlib.h>
struct PersonalInfo{
 char *name;
 int *age;

};
int main(){
struct PersonalInfo *WinHtut;
WinHtut=(struct PersonalInfo*)malloc(sizeof(struct PersonalInfo));

WinHtut->name="Hyper";
WinHtut->age=28;
printf("User name : %s\n",WinHtut->name);
printf("User age : %d",WinHtut->age);

return 0;

}
