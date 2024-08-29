// Insertion Sort
#include <iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void insertionSort(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1]=temp;
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
    cout<<"Before insertion sort :";
    printArray(arr,n);
    cout<<"After insertion sort :";
    insertionSort(arr,n);
    return 0;
}