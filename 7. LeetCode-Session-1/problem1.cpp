//You have a given integer suppose 123 and you have to do reverse this integer and display the answer like 321
//Note Return 0 when answer exceeds the limit of integer

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int ans=0;
    while(n!=0){
        int digit=n%10;
        if((ans>INT_MAX/10) || ans<INT_MIN/10){
            return 0;
        }
        ans=(ans*10)+digit;
        n=n/10;
        // i++;
    }
    cout<<"Your answer is :"<<ans<<endl;
    return 0;
}