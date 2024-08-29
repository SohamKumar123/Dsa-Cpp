//Write a program to check the given number is prime or not?

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    bool isPrime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime==0){
        cout<<"Not Prime"<<endl;
    }
    else{
        cout<<"Prime Number"<<endl;
    }
    return 0;
}