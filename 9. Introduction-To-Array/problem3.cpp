// Scope of the array

#include <iostream>
using namespace std;
void soham(int arr[],int size){
    cout<<"Inside the soham function"<<endl;
    arr[0]=120;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"Go to the main function"<<endl;
}
int main(){
    int arr[3]={1,2,3};
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    soham(arr,3);

    return 0;
}