#include<bits/stdc++.h>
using namespace std ;

string username ;
int pin ;
double balance ;

void createAccount(){
    cout<<"enter your name"<<"\n";
    getline(cin,username);
    cout<<"enter pin code"<<"\n";
    cin>>pin;
    cout<<"account created successfully\n";
    cout<<"-----------------------------\n";
}

//verify function 
bool verifyPin(){
    int userPin ;
    cout<<"enter your pin\n";
    cin>>userPin ;

    if(userPin == pin){
        return true ;
    }

    else{
        return false ;
    }
}

void diposit(){   
   
    if(!verifyPin()){
        cout<<"Invalid pin . Access denied\n";
        return ;
    }
     
    else{
         double amount ;
         cout<<"enter the amount to deposit\n";
         cin>>amount;
         if(amount > 0){
            balance+=amount ;
            cout<<"deposit "<<amount<< "EGP successfully\n";
         }

         else{
            cout<<"Invalid Amount\n";
         }

    }

}

void withdraw(){

    if(!verifyPin()){
        cout<<"Invalid pin . Access denied\n";
        return ;
    }

    else{
        double amount ;
        cin>>amount ;
        if( amount > balance){
            cout<<"there is no enough money in the account\n";

        }

        else if(amount > 0){

            balance-=amount;
            cout<<"your account has been debited with "<<amount<<endl;
        }

        else {
            cout<<"Invalid Amount to withdraw\n";
        }
    }
    
}

void dispalyInfo(){
    if(!verifyPin()){
        cout<<"Invalid pin . Access denied\n";
        return ;
    }

    else{
        cout<<"\n-----AccountInfo-------\n" ;
        cout<<"username: "<<username<<endl;
        cout<<"your pin: "<<pin<<endl;
        cout<<"your balance: "<<balance<<endl;
        cout<<"\n---------------------------\n";
    }
}

int main(){

    cout<<"welcome to our bank\n";
    cout<<"----------------------------\n";
    createAccount();

    int choice;
    do{
        cout<<"---------Menu--------\n";
        cout<<"(1) diposit\n" ;
        cout<<"(2) withdraw\n";
        cout<<"(3) displayInfo\n";
        cout<<"(4) Exit\n";
        cin>>choice;

        switch (choice)
        {
        case 1 :
            diposit();
            break;

        case 2:
            withdraw();
            break;

        case 3:
            dispalyInfo();
            break ;

        case 4:
            cout<<"thank you for using our bank\n";
            break;

        default:
            cout<<"Invalid choice\n";
            break;
        }
    }while(choice!=4);

    return 0 ;
}