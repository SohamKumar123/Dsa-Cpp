// You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
// Now the array is rotated at some pivot point unknown to you.
// For example, if 'arr' = [ 1, 3, 5, 7, 8], then after rotating 'arr' at index 3, the array will be 'arr' = [7, 8, 1, 3, 5].

#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    while(s<=e){
    if(arr[mid]==key){
      return mid;  
    } 
    else if(arr[mid]>key){
        e=mid-1;
    }
    else if(arr[mid]<key){
        s=mid+1;
    }
    mid=s+(e-s)/2;
  }
  return mid;
}

int getpivot(int arr[],int size){
    int s=0,e=size-1;
    int mid=mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[5]={7,9,1,2,3};
    int key=2;
    int pivotElement=getpivot(arr,5);
    if(arr[pivotElement]<key<arr[0])
    {

    }
}
