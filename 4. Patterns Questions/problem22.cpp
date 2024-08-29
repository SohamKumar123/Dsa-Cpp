// Problem : WAP to print given pattern :- 
    // 1 2 3 4 5 5 4 3 2 1        
    // 1 2 3 4 * * 4 3 2 1    
    // 1 2 3 * * * * 3 2 1         
    // 1 2 * * * * * * 2 1 
    // 1 * * * * * * * * 1 

#include <iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter total no.of rows :";
    cin>>r;
    int i=1;
    while(i<=r){
        //Print 1st Triangle
        int end=r+1-i;
        int j=1;
        while(j<=end){
            cout<<j<<" ";
            j++;
        }
        
        //Print 2nd Triangle
        int l=i-1;
        while(l){
            cout<<"*"<<" ";
            l--;
        }
        //Print 3rd Triangle
        int m=i-1;
        while(m){
            cout<<"*"<<" ";
            m--;
        }
        //Print 4th Triangle
        int k=end;
        while(k>=1){
            cout<<k<<" ";
            k--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}