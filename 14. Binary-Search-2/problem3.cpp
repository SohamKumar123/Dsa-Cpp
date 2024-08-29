// Given a non negative integer x return the square root of x rounded down to the nearest integer.The returned integer should be non-negative as well.

#include <iostream>
using namespace std;

long long int binarySearch(int n){
    int s=0,e=n;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        long long int square =mid*mid;
        if(square==n){
            return mid;
        }
        else if(square<n){
            ans=mid;
            s=mid+1;
        }
        else if(square>n){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int x=137;
    int result=binarySearch(x);
    cout<<result;
    return 0;
}