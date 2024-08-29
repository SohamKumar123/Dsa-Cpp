//You have been given a string 'STR' of words. You need to replace all the spaces between words with “@40”.

#include <iostream>
using namespace std;
string replaceSpace(string s){
    string temp=" ";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(s[i]);
        }
    }
    return temp;
}
int main(){
    string str;
    cout<<"Enter your string :";
    getline(cin,str);
    cout<<str<<endl;
    cout<<replaceSpace(str);
    
    return 0;
}