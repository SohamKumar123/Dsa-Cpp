//Problem: WAP to check the given character is lowercase , uppercase , numeric or special character
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character :"<<" ";
    cin>>ch;
    if(isdigit(ch)){
        cout<<"It is a digit"<<endl;
    }
    else if(islower(ch)){
        cout<<"It is a lower case"<<endl;
    }
    else if(isupper(ch)){
        cout<<"It is an upper case"<<endl;
    }
    else{
        cout<<"It is a special character"<<endl;
    }
    return 0;
}