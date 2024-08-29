//You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

#include <iostream>
using namespace std;
int transpose(int arr[3][3] ,int r,int c){
    int result[r][c];
    for(int j=0;j<3;j++){
       for(int i=0;i<3;i++){
        result[i][j]=arr[i][j];
        }
     }
   return result[r][c];     

}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    arr[3][3]=transpose(arr,3,3);
    cout<<"After Rotation"<<endl;

     for(int i=0;i<3;i++){
        for(int j=2;j>=0;j--){
         cout<<arr[j][i]<<" ";
        }
        cout<<endl;
     }
    return 0;
}