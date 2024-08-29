//Problem :- WAP to check the given number is prime or not?
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :"<<" ";
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"It is not prime number"<<endl;
            break;
        }
        else{
            cout<<"It is prime number"<<endl;
        }
        i++;
    }
    return 0;
}