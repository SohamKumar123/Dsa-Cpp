#include <iostream>
#include <array>
using namespace std;
int main(){
    array<int,4> arr={1,2,3,4};
    // traversing the array STL
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }

    // display the 2nd index and also check array is empty or not

    cout<<"Element at 2nd index ->"<<arr.at(2)<<endl;
    cout<<"Empty or not ->"<<arr.empty()<<endl;

    //finding the first and last element of array
    cout<<"First element is :"<<arr.front()<<endl;
    cout<<"Last element is :"<<arr.back()<<endl;
}