// WAP to find the unique number in given array

#include <iostream>
using namespace std;

int find_unique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
      ans=ans^arr[i];
      cout<<"Answer is :"<<ans<<endl;
    }
    return ans;
}
int main(){
  int n;
  cout<<"Enter the size of an array :";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of an array :";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"The unique number in this array is :"<<find_unique(arr,n)<<endl;
  return 0;
}