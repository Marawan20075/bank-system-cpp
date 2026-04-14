#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std ;

int main(){

    string questions[4]={"Which of the following is a compiled programming language?", 
        "Which data type is used to store true/false values?"
    ,"Which concept allows a class to inherit properties and methods from another class?"
    ,"Which of the following languages uses automatic garbage collection?"
} ;

string options[4]={"(A) Python\n(B) Java\n(C) C++\n(D) JavaScript",
    "(A) int\n (B) float\n (C) bool\n (D) char",
    "(A) Encapsulation\n (B) Abstraction\n (C) Inheritance\n D) Polymorphism",
    "(A) C\n (B) C++\n (C) Java\n D) Assembly"};


char answers[4]={'c' , 'c' , 'c' , 'c'};

vector<string>tru;
vector<string>fal;

char reapet= 'y', answer ;

int correct = 0  , wrong = 0 , attempts = 0;
 
    while(reapet=='y'&& reapet != 'n'){
        cout<<"WELCOME TO PROGRAMMING QUIZ\n";
        cout<<"\n----------------------------\n";
        for(int i = 0 ; i < 4 ; i++){

            cout<<"("<<i+1<<")"<<questions[i]<<endl;
            cout<<options[i]<<endl;
            cout<<"enter the answer ('a' 'b' 'c' 'd'): ";
            cin>>answer;
            cout<<"\n----------------------------------\n";
            answer=tolower(answer) ;

            while(answer!='a' && answer!='b' && answer!='c' && answer!='d'){
                cout<<"enter the choice from a to d\n";
                cin>>answer ;
                answer=tolower(answer) ;  
            }


            if(answers[i] == answer){
                correct++; 
                tru.push_back(questions[i] );
            }

            else{
                wrong++ ;
                fal.push_back(questions[i] ) ;
            }

        } 

        cout<<"your degree is "<<correct<<"/"<<4<<endl;
        cout<<"your correct answers \n";
        cout<<"--------------------\n";
        for(int i =0 ; i < tru.size() ; i++)
        {
                cout<<tru[i]<<endl;
                cout<<"----------------\n";
            }
            
        

        cout<<"your wrong answers \n";
        cout<<"------------------\n";
        for(int i =0 ; i < fal.size();i++){
            
                cout<<fal[i]<<endl;
                cout<<"----------\n";
            }
        
        attempts++;
        tru.clear();
        fal.clear();
        correct = 0;
        wrong = 0;
        cout<<"you want to take the quiz again\n ";
        cout<<"if you want to take it press(y) else press(n)\n";
        cin>>reapet; 
    }

    cout<<"your attempts is = "<<attempts<<endl;

    return 0 ;
}