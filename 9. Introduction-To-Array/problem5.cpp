// Linear Search
#include <iostream>
using namespace std;
bool linearSearch(int arr[],int size,int find){
    for(int i=0;i<size;i++){
        if(arr[i]==find){
          return true;
        }
    }
    return false;

    
}
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the digit which you want to find:"<<endl;
    cin>>x;
    bool isFound=linearSearch(arr,n,x);
    if(isFound==true){
        cout<<"Found "<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}