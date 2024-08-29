// Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:

// Find the leftmost occurrence of the substring part and remove it from s.
// Return s after removing all occurrences of part.

#include <iostream>
using namespace std;

string removeOccurences(string s,string part){
    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main(){
    string s, part;
    cout<<"Enter your string :";
    cin>>s;
    cout<<"Enter your part :";
    cin>>part;
    cout<<endl;
    cout<<"Your answer is :";
    cout<<removeOccurences(s,part);
    return 0;

}