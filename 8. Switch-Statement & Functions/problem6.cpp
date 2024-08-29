// Write a function to tell that a given number is prime or not?

#include <iostream>
using namespace std;

bool isPrime(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    if(isPrime()==true){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
    return 0;
}