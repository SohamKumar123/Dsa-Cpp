// Reverse an array

#include <iostream>
using namespace std;
void reverseArray(int arr[],int size){
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of an array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array:";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    reverseArray(arr,n);
    
    return 0;
}