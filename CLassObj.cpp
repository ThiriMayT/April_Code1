#include<iostream>
using namespace std;
class MyClass{
 public:
   int age;
  string Mystring;

void MyFun(){   //method
cout<<"Hello Myfun\n";
}
};
// we call "Method" when something under class
int main(){

MyClass myobj;
MyClass myobj2;
myobj.age=24;
myobj2.age=33;
myobj.Mystring="Thiri";
myobj2.Mystring="MayThu";
myobj2.MyFun();

cout<<"User Name1:"<<myobj.Mystring<<endl;
cout<<"User Name2:"<<myobj2.Mystring<<endl;

cout<<"User Age1:"<<myobj.age<<endl;
cout<<"User Age2:"<<myobj2.age<<endl;
    return 0;
}