// Suppose you have Rs.1330 amount find out how many Rs.100 notes , Rs.50 notes , Rs.20 notes , Rs.10 notes required for fulfill the amount

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the amount :";
    cin>>n;
    int arr[4]={100,50,20,10};
    for(int i=0;i<4;i++){
        int result=n/arr[i];
        cout<<result<<" "<<"note of Rs."<<arr[i]<<" "<<"are required"<<endl;
        n=n-(result*arr[i]);
    }
    return 0;
}
