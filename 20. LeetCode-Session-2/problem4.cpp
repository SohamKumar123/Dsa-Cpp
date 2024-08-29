// Given an integer array nums,move all 0's to the end of it while maintaining the relative order of the non-zero elements

#include <iostream>
using namespace std;
int main(){
    int n=7;
    int arr[n]={2,0,1,3,0,0,0};
    cout<<"Before moving zeroes : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"After moving zeroes : ";
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;



    return 0;
}