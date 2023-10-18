#include <iostream>
using namespace std;

int main(){
    string password;
    string correct_password= "dexter123";
    cout<<"enter the password: "<<endl;
    cin>>password;
    while(password != correct_password){
        cout<<"you have entered wrong password. Please try again"<<endl;
        cin>>password;
        cout<<"enter the password: "<<endl;
    }
    
        cout<<"you have entered correct password"<<endl;

    
    
    
    return 0;
}