// Write a program to find the length of string which is stored in character array

#include <iostream>
using namespace std;


void reverse(char name[],int n){
    // for(int i=n;i>=0;i--){
    //     cout<<name[i];
    // }
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}
int strlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter your name :"<<endl;
    cin>>name;

    cout<<"Your name is : ";
    cout<<name<<endl;
    int length=strlength(name);
    cout<<"Your name length is : "<<strlength(name)<<endl;

    reverse(name,length);
    cout<<name;

    return 0;

}