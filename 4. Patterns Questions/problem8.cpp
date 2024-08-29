// Problem : WAP to print given pattern :- 
    //   1
    //   2 1
    //   3 2 1
    //   4 3 2 1
#include <iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter no.of rows :";
    cin>>r;
    int i=1;
    while(i<=r){
        int j=1;
        while(j<=i){
            cout<<i-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}