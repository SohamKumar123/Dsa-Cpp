// Write a program to find the power of a digit with appropriate number using functions

#include <iostream>
using namespace std;

int power(){
    int a,b;
    cin>>a;
    cin>>b;
    int ans=1;
    for(int i=0;i<b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    cout<<"Answer is :"<<power()<<endl;
    cout<<"Answer is :"<<power()<<endl;
    cout<<"Answer is :"<<power()<<endl;
    cout<<"Answer is :"<<power()<<endl;

    return 0;
}