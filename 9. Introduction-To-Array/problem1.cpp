#include <iostream>
using namespace std;
int main(){
    int arr[10];
    fill_n(arr,10,90);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}