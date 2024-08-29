// You are a given array, there is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

#include <iostream>
using namespace std;

int  find_Duplicate(int arr[],int size){
    int ans=0;
    // XOR including all array elements
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
        // cout<<"After first operation :"<<ans<<endl;
    }

    // XOR[1,n-1]
    for(int i=1;i<size;i++){
        ans=ans^i;
        // cout<<"After second operation :"<<ans<<endl;
    }
    return ans;


}
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The duplicate element is :"<<find_Duplicate(arr,n)<<endl;
    return 0;
}