// You have a given an integer n, return true if it is a power of two. Otherwise return false

#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=0;i<31;i++){ 
        int p=pow(2,i);
        if(p==n){
            cout<<"True"<<endl;
        }
    }
    cout<<"false"<<endl;
    return 0;

}