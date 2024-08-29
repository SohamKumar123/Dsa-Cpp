// WAP to print the larget row sum in 2D array

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int arr[3][3]={13,4,11,200,12,1,7,8,97};
    int x=0;
    int maxi=0;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        maxi=max(x,sum);
        if(x<sum){
            x=sum;
        }
    }
    cout<<"Maximum sum row is :"<<" "<<maxi<<endl;
    return 0;
}