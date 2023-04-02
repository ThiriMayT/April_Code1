#include<stdio.h>
#include<stdlib.h>

struct joke{

char *name;
char *fatherName;
char *hobby;
int *age;
int *phNo;
};
int main(){
struct joke*may;
may=(struct joke*)malloc(sizeof(struct joke));


may->name="clasy jessi";
may->fatherName="John";
may->hobby="Swimming";
may->age=19;
may->phNo=12345678;


printf("Name is %s\n",may->name);

printf("FatherName is %s\n",may->fatherName);
printf("hobby is %s\n",may->hobby);
printf("age is %d\n",may->age);
printf("ph no is %d\n",may->phNo);











return 0;
}
