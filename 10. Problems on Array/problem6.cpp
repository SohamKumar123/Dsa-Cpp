// You are given an integer array 'ARR' of size 'N' and an integer 'S'.Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'. 

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s;
    cout<<"Enter the value of s:";
    cin>>s;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])==s){
                if(arr[i]<arr[j]){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                }
                else{
                cout<<arr[j]<<" "<<arr[i]<<endl;
                }
            }
        }
    }
    return 0;
}