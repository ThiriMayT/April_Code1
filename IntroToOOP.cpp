#include<iostream>
using namespace std;


class MyClass{
    public:
 int myAge=0;
 string myName;

void myMethod(){
    cout<<"This is my method\n";
}
int bankIDgetter(){
    return moneyID;
}string bankUsername(){
    return username;
}
string bankPassgetter(){
    return bankPass;
}

int bankSetter(string uname,int id,string pw){
    username=uname;
    moneyID=id;
    bankPass=pw;
}
private:
string username;
string bankPass;
int moneyID;
};

int main(){
MyClass myobj;
myobj.myAge=19;
myobj.myName="Mayri@la";
myobj.myMethod();
/*cout<<myobj.myAge<<endl;
cout<<myobj.myName<<endl;*/


myobj.bankSetter("Mayri",1111,"10Octo");

cout<<myobj.bankIDgetter()<<endl;
cout<<myobj.bankPassgetter()<<endl;
cout<<myobj.bankUsername()<<endl;
return 0;
}