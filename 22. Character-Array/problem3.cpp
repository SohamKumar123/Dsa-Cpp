//Given a string str of lowercase alphabets. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.

#include <iostream>
using namespace std;

char getMaxOccCharacter(string s){
    int arr[26] ={0};
    // create an array of count of character

    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int number =0;
        //lowercase
        if(islower(ch)){
            number=ch-'a';
        }
        // uppercase
        else{
            number=ch-'A';
        }
        arr[number]++;
    }
    // find the max value
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi < arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    return 'a'+ans;
}
int main(){
    string s;
    cout<<"Enter your string : ";
    cin>>s;
    cout<<getMaxOccCharacter(s);
    return 0;
}