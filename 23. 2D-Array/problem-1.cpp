// Apply linear search in 2D array

#include <iostream>
using namespace std;

bool isPresent(int arr[3][4],int target,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           if(arr[i][j]==target){
            return 1;
           }
       }
    }
    return 0;
}

int main(){
   

    int arr[3][4];
    cout<<"Enter the elements of 2D array : ";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
       }
    }

    cout<<"Your 2D array is : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }

    int target;
    cout<<"Enter your target element :";
    cin>>target;
    if(isPresent(arr,target,3,4)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}