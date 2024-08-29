//Write a program to print fibonacci series 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n :";
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int x=a+b;
        cout<<x<<" ";
        a=b;
        b=x;
    }
    return 0;
}