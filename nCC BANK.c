//
// Created by National Cyber City on 9/26/2022.
//NCCBank
//version 2 // 27-9-2022
//version 3// 17-10-2022

#include<iostream>
using namespace std;

class Bank{
public:
    int currentID=0;
    int currentUserAmount=0;
    int locate=0;
    string username[100];
    string upassword[100];
    int amount[100];

    Bank(){
        cout<<"Welcome to our Bank!"<<endl;

    }

    int reGister();
    int login();
    int mainMenu();
    int allInfo();
    int exchange();
    int toTransfer(int currentID,int receiverID,int toTransferAmount);
    int toCheckUserName(string toTransferName);
    int toWithDraw(int currentId , int withdrawamount);
    int updateAmount(int toupdateAmount ,int updateOption);
    int changeAccocuntInfo();
    int changeAccountUsername();
    int changeAccountPassword();
};

int Bank::reGister() {
    string name;
    string password;
    string password2;
    int money;
    cout<<"This is from registration"<<endl;
    cout<<"Enter your name to register:";
    cin>>name;
    int status = toCheckUserName(name);

    if(status == 1111){
        cout<<"Enter your password to register:";
        cin>>password;
        cout<<"Confirm password to register:";
        cin>>password2;
        cout<<"Enter amount:";
        cin>>money;
        if(password == password2){

            username[locate] = name ;
            upassword[locate] = password;
            amount[locate] = money;


            cout<<"Registration Success!"<<endl;
            locate++;
            allInfo();
        }
    } else{
        cout<<"#####Username Already Registered#####"<<endl;
        reGister();
    }


}

int Bank::login() {
    string lusername;
    string lpassword;
    cout<<"This is from Login"<<endl;
    cout<<"Enter username to login:";
    cin>>lusername;
    cout<<"Enter pass to login for"<<lusername;
    cin>>lpassword;

    for(int i=0; i<=locate ; i++){
        if(lusername == username[i] && lpassword== upassword[i]){
            currentID = i;
            currentUserAmount = amount[i];
            cout<<"Login Success"<<endl;
            exchange();

        }
    }
    return 100;
}
int Bank::exchange(){
    string toTransferName;
    int toTransferAmount;
    int userAmount=0;

    int exchangeOption=0;
    cout<<"Press 1 to Transfer:"<<endl;
    cout<<"Press 2 to Withdraw:"<<endl;
    cout<<"Press 3 to Update Amount:"<<endl;
    cout<<"Press 4 to Quit:"<<endl;
    cout<<"Press 5 to change account Information!"<<endl;

    cin>>exchangeOption;
    if(exchangeOption==1){
        cout<<"Enter name to transfer:";
        cin>>toTransferName;
        int receiverID = toCheckUserName(toTransferName);

        if(receiverID >= 0 ){
            while (receiverID >=0 ){

                cout<<"Enter amount to Transfer:";
                cin>>toTransferAmount;
                if(toTransferAmount>=currentUserAmount){
                    cout<<"Invalid amount:"<<endl;
                    continue;
                } else{

                    toTransfer(currentID,receiverID,toTransferAmount);
                    allInfo();
                    exchange();
                }
            }

        } else{
            cout<<"Name is not exit in our DB:"<<endl;
            exchange();
        }

    } else if(exchangeOption==2){
        int withdrawamount=0;
        cout<<"To Withdraw Option:"<<endl;
        cout<<"Enter amount to Withdraw:";
        cin>>withdrawamount;

        if(amount[currentID]-100 > withdrawamount){
          toWithDraw(currentID , withdrawamount);
          exchange();
        } else{
            cout<<"Invalid amount to withdraw : "<<withdrawamount;
            exchange();
        }

    } else if(exchangeOption==3){
        int toupdateAmount=0;
        int updateOption=0;
        cout<<"This is Update Option"<<endl;
        cout<<"Press 1 To add amount for Update\nPress 2 to sub amount for Update!:";
        cin>>updateOption;

        if(updateOption==1){
            cout<<"Enter amount to add for  Update :"<<username[currentID];
            cin>>toupdateAmount;
            updateAmount(toupdateAmount , updateOption);
            allInfo();
            exchange();
        } else{
            cout<<"Enter amount to sub for Update :"<<username[currentID];
            cin>>toupdateAmount;
            updateAmount(toupdateAmount , updateOption);
            allInfo();
            exchange();
        }

    } else if(exchangeOption==4){
        //Quit Option
        login();

    } else if( exchangeOption == 5){

        changeAccocuntInfo();

    }else{
        cout<<"Invalid Option"<<endl;
        exchange();
    }
}
int Bank::updateAmount(int toupdateAmount , int updateOption){

    if( updateOption == 1){
        amount[currentID] = amount[currentID] + toupdateAmount;

    } else{

        amount[currentID] = amount[currentID] - toupdateAmount;
    }

}

int Bank::toTransfer(int currentID,int receiverID,int toTransferAmount){
    amount[currentID]=amount[currentID]-toTransferAmount;
    amount[receiverID]=amount[receiverID] + toTransferAmount;
    cout<<"Money Successfully Transferred to : "<<username[receiverID]<<endl;
    cout<<"Transferred Amount: "<<toTransferAmount<<endl;
}

int Bank::toWithDraw(int currentId , int withdrawamount){
    amount[currentId]=amount[currentId] - withdrawamount;
    cout<<username[currentId]<<" : amount = "<<amount[currentId]<<endl;

}

int Bank::toCheckUserName(string toTransferName){

    for(int i =0 ; i<=locate ; i++){
        if(toTransferName == username[i]){
            return i;
        }
    }
    return 1111;//error code for checking username;
}

int Bank::mainMenu(){
    int option=10;
    while (true){
        cout<<"Press 1 to Register;"<<endl;
        cout<<"Press 2 to Login"<<endl;
        cout<<"Press 3 to Quit"<<endl;
        cin>>option;
        if(option == 1){
            //registration
            reGister();
        } else if(option == 2){
            //login
            int status=login();
            if(status == 100){
                cout<<"Try again"<<endl;
            }
        } else{
            cout<<"bye bye"<<endl;
            return 0;
        }
    }
}

int Bank::allInfo() {
    cout<<"Username"<<endl;
    for(int i=0; i<=locate ; i++){
        cout<<"   "<<username[i]<<endl;
    }

    cout<<"Password"<<endl;
    for(int i=0; i<=locate ; i++){
        cout<<"   "<<upassword[i]<<endl;
    }

    cout<<"Amount"<<endl;
    for(int i=0; i<locate ; i++){
        cout<<"   "<<amount[i]<<endl;
    }
}


int Bank::changeAccocuntInfo(){
    int optionForchange=0;

    cout<<"Press 1 to Change Username:\nPress 2 to Change Password:"<<endl;
    cin>>optionForchange;

    if(optionForchange == 1){

        changeAccountUsername();
    }else if(optionForchange == 2){
        changeAccountPassword();

    }

}

int Bank::changeAccountUsername() {
    string newUsername;
    cout<<"This is your current Username: "<<username[currentID]<<endl;
    cout<<"Enter your new Username: ";
    cin>>newUsername;
    int status = toCheckUserName(newUsername);//not include 1111
    if(status == 1111){
        cout<<"Updating your New Username:..."<<endl;
        username[currentID]=newUsername;
        if(username[currentID] == newUsername){
            cout<<"Changing Success!"<<endl;
            cout<<"This is your New Username:"<<username[currentID]<<endl;
            mainMenu();
        }
    } else{
        cout<<"New username Already Registered!"<<endl;
        changeAccountUsername();
    }
}

int Bank::changeAccountPassword() {

    string newPassword;
    string currentPassword;
    cout<<"Enter your current password!:";
    cin>>currentPassword;

    if( upassword[currentID] == currentPassword){
        cout<<"Enter your new password:";
        cin>>newPassword;

        if(newPassword == currentPassword){
            cout<<"Password are same with old one:"<<endl;
            changeAccountPassword();
        } else{

            upassword[currentID] = newPassword;
            cout<<"Password changed successfully!"<<endl;
            mainMenu();
        }
    } else{
        cout<<"Wrong Password !"<<endl;
        exchange();
    }

}

int main(){

    Bank _obj;
    int ex=_obj.mainMenu();
    if(ex == 0){
        exit(1);
    }
}


// Problems
// same username .done
// password change . done
// username and password အား အသေးထားပြီး admin အတွက် ထားရန်
// transition အသေးစိတ်အား တစ်ယောက်ချင်းစီ အလိုက် မှတ်တမ်း တင်ထားရန် ( နံမည် ရိုက်လိုက်တာနဲ့ နံမည်နဲ့ ပတ်သက်တဲ့ data )
// transition view အား user အတွက်လည်း သီးသန့် တစ်ယောက်စာ ထားပေးရန်
// all info အား user တစ်ယောက်ခြင်းစီ အတွက် ခွဲထား ပေးရန်
