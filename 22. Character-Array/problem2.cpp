// You are given a string 'S'. Your task is to check whether the string is palindrome or not. For checking palindrome, consider alphabets and numbers only and ignore the symbols and whitespaces.

#include <iostream>
using namespace std;

char toLowercase(char ch){
    if(ch>='a' && ch <='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool checkPalindrome(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
      
        if(toLowercase( name[s])!=toLowercase( name[e]) ){
            return 0;
        }
        else{
            s++;
            e--;
        }
        
        
    }
    return 1;

}
int strlength(char name[]){
    int count=0;
    for(int i=0;name[i] != '\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter your string :";
    cin>>name;

    cout<<"Your original string is : ";
    cout<<name<<endl;
    int length=strlength(name);
    if(checkPalindrome(name,length)==1){
        cout<<"It is palindrome"<<endl;
    }
    else{
        cout<<"It is not palindrome"<<endl;
    }

    const char* arr[5]={"z","c","d","/0","a"};

    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<endl;
    }


    
    return 0;

}