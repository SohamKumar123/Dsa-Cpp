// Counting number of occurrences of key element in array using linear search

#include <iostream>
using namespace std;
int main(){
    int arr[8]={0,0,1,1,2,2,2,2};
    int key=1;
    int count=0;
    for(int i=0;i<8;i++){
        if(arr[i]==key){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}