#include <iostream>
using namespace std;

bool checkPalindrome(string& str,int i,int j){
    if(i>j){
        return false;
    }
    if(str[i]==str[j]){
        checkPalindrome(str,i+1,j-1);
        return true;
    }
}

int main(){
    string name="nana";
    if(checkPalindrome(name,0,name.length()-1)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
    
    
}