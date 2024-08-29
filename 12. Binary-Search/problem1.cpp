// Binary Search

// #include <iostream>
// using namespace std;
// int main(){
//     int n=6;
//     int arr[n]={3,7,11,13,19,27};
//     int key=111;
//     int beg=0,end=n-1;
//     int mid=(beg+end)/2;
//     for(int i=0;i<n;i++){
//         if(arr[mid]==key){
//             cout<<"Array is present at :"<<mid<<" "<<"index"<<endl;
//             break;
//         }
//         else if(arr[mid]<key){
//             beg=mid+1;
//             mid=(beg+end)/2;
//         }
//         else if(arr[mid]>key){
//             end=mid-1;
//             mid=(beg+end)/2;
//         }
//         else{
//             cout<<"Element is absent"<<endl;
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int  binarySearch(int arr[], int n,int key){
    int beg=0,end=n-1;
    int mid=beg+((end-beg)/2);
    for(int i=0;i<n;i++){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            beg=mid+1;
            mid=beg+((end-beg)/2);
        }
        else if(arr[mid]>key){
            end=mid-1;
            mid=beg+((end-beg)/2);
        }
    }
    return -1;
}
int main(){
    int size=6;
    int arr[size]={3,7,11,19,19,19}; 
    int k=19;
    int index=binarySearch(arr,size,k);
    if(index!=-1){
        cout<<"Element  found at index "<<index<<endl;
    }
    else{
        cout<<"Element not found in the array"<<endl;
    }
    
    return 0;
    

}