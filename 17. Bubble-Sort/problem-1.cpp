// Bubble Sort

#include <iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){           
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    printArray(arr,n);
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
    cout<<"Before Sorting :"<<endl;
    printArray(arr,n);
    cout<<endl;
    cout<<"After Bubble Sort"<<endl;
    bubbleSort(arr,n);
    return 0;
}