//You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
// Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.

#include <iostream>
using namespace std;

int firstOccur(int arr[],int n,int key){
    int beg=0,end=n-1;
    int ans=-1;
    int mid=beg+(end-beg)/2;
    while(beg<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key) {
            beg=mid+1;
        }
        mid=beg+(end-beg)/2;
    }
    return ans;
}

int lastOccur(int arr[],int n,int key){
    int beg=0,end=n-1;
    int ans=-1;
    int mid=beg+(end-beg)/2;
    while(beg<=end){
        if(arr[mid]==key){
            ans=mid;
            beg=mid+1;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
        mid=beg+(end-beg)/2;
    }
    return ans;

}



int main(){
    int arr[8]={0,0,1,1,2,2,2,2};
    int key=2;
    int result1 = firstOccur(arr,8,key);
    int result2=lastOccur(arr,8,key);
    if(result1!=-1 && result2!=1){
        cout<<result1<<" " <<result2<<endl;
    }
    else{
        cout<<result1<<" "<<result2 <<endl;
    }
    return 0;
}