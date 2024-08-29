//Problem :- Write a program to print the sum of all even numbers from 1 to N.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n :"<<" ";
    cin>>n;
    int i=2;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    cout<<"Sum is :"<<" "<<sum<<endl;
    return 0;
}