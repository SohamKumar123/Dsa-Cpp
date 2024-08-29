// Apply selection sort  algorithm to the given array

#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void selectionSort(int arr[], int n) {
    for(int i=0;i<n-1;i++) {
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i], arr[minIndex]);
       
    }
    printArray(arr,n);
    
}

int main(){
    int n=5;
    int arr[n]={64,25,12,22,11};
    cout<<"Your unsorted array is :";
    printArray(arr,n);
    cout<<"After selection sort :";
    selectionSort(arr,n);
    return 0;
}