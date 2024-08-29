//Problem : WAP to print given pattern
    // 3 2 1
    // 3 2 1
    // 3 2 1
#include <iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter no.of rows:"<<" ";
    cin>>r;
    cout<<"Enter no.of columns:"<<" ";
    cin>>c;
    int i=1;
    while(i<=r){
        int j=1;
        while(j<=c){
            cout<<r-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}