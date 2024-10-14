#include <iostream>
using namespace std;

void swapAlternate(int arr[] , int n){
    int temp;
    for(int i=0;i<n;i+=2){
        temp = arr[i];
        arr[i]= arr[i+1];
        arr[i+1]=temp;
    }
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    swapAlternate(arr,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}