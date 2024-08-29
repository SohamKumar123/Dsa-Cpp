//WAP to convert the decimal number into binary number system
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int bit=n & 1;
        ans=(bit*pow(10,i))+ans;
        n = n >> 1;
        cout<<bit<<endl;
        i++;
    }
    cout<<"Answer is "<<ans<<endl;
    return 0;
}