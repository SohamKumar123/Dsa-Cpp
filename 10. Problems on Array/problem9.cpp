//Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int nums1[4] = {1,2,2,1};
    int nums2[2]={2,2};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            if(nums1[i]==nums2[j]){
                int result=nums2[j];
                cout<<result<<" ";
                nums2[j]=INT_MAX;
                for(int k=0;k<2;k++){
                    if(nums2[k]==result){
                        nums2[k]=INT_MIN;
                    }
                }

            }
        }
    }
    return 0;
}