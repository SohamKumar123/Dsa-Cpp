// WAP to find the index of peak element of a mountain using binary search

#include <iostream>
using namespace std;
int main(){
    int arr[4]={3,4,5,1};
    int beg=0,end=4-1;
    int mid=beg+(end-beg)/2;
    while(beg<end){
        if(arr[mid]<arr[mid+1]){
            beg=mid+1;
        }
        else{
            end=mid;
        }
        mid=beg+(end-beg)/2;
    }
    cout<<"The index of peak element is "<<mid<<endl;
    return 0;
}