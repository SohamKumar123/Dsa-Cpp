// Write a function to find the nCr result

#include <iostream>
using namespace std;

int calculate(){
    int n,r;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Enter the value of r:";
    cin>>r;
    int ans1=1;
    for(int i=n;i>=1;i--){
        ans1=ans1*i;
    }
    int ans2=1;
    for(int i=r;i>=1;i--){
        ans2=ans2*i;
    }
    int ans3=1;
    for(int i=(n-r);i>=1;i--){
        ans3=ans3*i;
    }
    int result=(ans1)/(ans2*ans3);
  
    return result;
}

int main(){
    cout<<"Answer is:"<<calculate()<<endl;
    cout<<"Answer is:"<<calculate()<<endl;

    return 0;

}