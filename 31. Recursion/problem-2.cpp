#include <iostream>
using namespace std;

bool isBinary(int *arr,int key,int n){
    if(n==0){
        return false;
    }
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    if(key==arr[mid]){
        return true;
    }
    if(mid>key){
        e=mid;
        mid=(s+e)/2;

    }
    else{
        s=mid+1;
        mid=(s+e)/2;
    }
    isBinary(arr,key,n-1);
}

int main(){
    int arr[6]={2,4,6,10,14,16};
    int key=10;
    if(isBinary(arr,key,6)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
}