// // Write a program to find out the maximum and minimum digit out of the array using functions
// First Method
// #include <iostream>
// #include <cmath>
// using namespace std;
// int max_digit(int arr[],int size){
//     int max_answer=0;
//     for(int i=0;i<size;i++){
//         max_answer=max(max_answer,arr[i]);
//     }
//     return max_answer;
// }
// int min_digit(int arr[],int size){
//     int min_answer;
//     if(arr[0]<arr[1]){
//         min_answer=arr[0];
//     }
//     else{
//          min_answer=arr[1];
//     }
//     for(int i=0;i<size;i++){
//         min_answer=min(min_answer,arr[i]);
//     }
//     return min_answer;
// }

// int main(){
//     int n;
//     cout<<"Enter the size of an array :";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of an array :";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Maximum digit is :"<<max_digit(arr,n)<<endl;
//     cout<<"Minimum digit is :"<<min_digit(arr,n)<<endl;


//     return 0;
// }

// Second Method

#include <iostream>
#include <cmath>
using namespace std;
int max_digit(int arr[],int size){
    int max=INT32_MIN;
    for(int i=0;i<size;i++){
         if(arr[i]>max){
            max=arr[i];
         }
    }
    return max;
}

int min_digit(int arr[],int size){
    int min=INT32_MAX;
    for(int i=0;i<size;i++){
         if(arr[i]<min){
            min=arr[i];
         }
    }
    return min;


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
    cout<<"Maximum digit is :"<<max_digit(arr,n)<<endl;
    cout<<"Minimum digit is :"<<min_digit(arr,n)<<endl;

    return 0;
}