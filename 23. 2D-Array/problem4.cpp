// For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the ARR in a sine wave order, i.e., print the first column top to bottom, next column bottom to top, and so on.

#include <iostream>
using namespace std;
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<"Your wave form of given 2D array will be :"<<endl;
    for(int j=0;j<4;j++){
        if(j%2==0){
            for(int i=0;i<3;i++){
                cout<<arr[i][j]<<" ";
            }
            
           
        }
        else{
             for(int i=3;i>0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    return 0;

}
