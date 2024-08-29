// Counting number of occurrences of key element in array using Binary search

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
        else if(arr[mid]>key){
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
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            beg=mid+1;
        }
        mid=beg+(end-beg)/2;
    }
    return ans;

}


int main(){
    int arr[8]={0,0,1,1,2,2,2,2};
    int key=0;
    int result1=firstOccur(arr,8,key);
    int  result2=lastOccur(arr,8,key);
    cout<<result1<<" "<<result2<<endl;
    cout<<result2-result1+1<<endl;
    return 0;
}