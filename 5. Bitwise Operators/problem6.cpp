//Write a program to print counting from 1 to n using for loop

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    return 0;
}