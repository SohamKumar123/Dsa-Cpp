// WAP to print the row sum and column sum of 2D array 

#include <iostream>
using namespace std;

int main(){
    int arr[3][3]={3,4,11,2,12,1,7,8,7};
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        cout<<"Addition of "<<i<<" "<<"row is :"<<" "<<sum<<endl;
    }
    for(int j=0;j<3;j++){
        int add=0;
        for(int i=0;i<3;i++){
            add+=arr[i][j];
        }
        cout<<"Addition of "<<j<<" "<<"columns is :"<<" "<<add<<endl;
    }
    return 0;
}