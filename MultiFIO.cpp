#include<iostream>
#include<fstream>
using namespace std;
int main(){


FILE *fptr;
fptr=fopen("Miltiple.txt","w");



for(int i=1;i<=16;i++){

for(int j=1;j<=16;j++){
    int a=i*j;
fprintf(fptr," \n %d * %d = %d ",i,j,a);



}


 fprintf(fptr,"\n");

}
 fclose(fptr);
 
  for(int i=1;i<=16;i++){

for(int j=1;j<=16;j++){

   cout<<i<< " * "<< j << " = " <<i*j<<endl;
}
    cout<<endl;
 }
    return 0;
}