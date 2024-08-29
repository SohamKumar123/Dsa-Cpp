// SWAP alternate

#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}

void swapAlternate(int a[],int size){
    int temp;
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            // swap(a[i],a[i+1]);
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of an array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"After swapping:";
    swapAlternate(arr,n);
    printArray(arr,n);
}