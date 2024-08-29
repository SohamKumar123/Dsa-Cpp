//WAP to reverse concatenate the given n number;

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        double x=pow(10,i);
        ans=(a[i]*x)+ans;
    }
    cout<<"Your answer is"<<ans<<endl;

    return 0;
}