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
            for(int k=j+1;k<n;k++){
                if((arr[i]+arr[j]+arr[k])==s){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                }
            }
        }
    }
    return 0;
}