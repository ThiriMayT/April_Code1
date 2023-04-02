#include<stdio.h>

int main(){

double param1,param2;
printf("Enter first parametre : \n");
scanf("%d",&param1);
printf("Enter second parametre : \n");
scanf("%lf",&param2);                                // this is the return type
 ( double param1, double param2)     // this is the name, followed by the parameters
 {
   if (param1 > param2)
     {
       return param1;  // Notice: that param1 is of type double and the return
                       //         type is also of type double
     }
   else
     {
       return param2;
     }
 }
 return 0;
}
