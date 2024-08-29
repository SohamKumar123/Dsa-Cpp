#include <iostream>
using namespace std;

int add(int *arr,int n){
    int sum=0;
    // base case
    if(n==0){
        return sum;
    }
    return arr[n - 1] + add(arr, n - 1);
}

int main(){
    int arr[5]={1,2,3,4,5};
    cout<<add(arr,5);
    return 0;
}