#include <iostream>
using namespace std;
bool isLinear(int *arr,int key,int n){
    if(n==0){
        return false;
    }
    if(key==arr[n-1]){
        return true;
    }
    isLinear(arr,key,n-1);
}
int main(){
    int arr[5]={1,2,3,4,5};
    int key=52;
    if(isLinear(arr,key,5)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}