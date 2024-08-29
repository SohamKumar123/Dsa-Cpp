//Write a program to print the sum from 1 to N number

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n :";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
    return 0;
}