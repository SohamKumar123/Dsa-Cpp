// Problem : WAP to print 
//    1 2 3
//    4 5 6
//    7 8 9

#include <iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the no.of rows :"<<" ";
    cin>>r;
    cout<<"Enter the no.of columns :"<<" ";
    cin>>c;
    int count=1;
    int i=1;
    while(i<=r){
        int j=1;
        while(j<=c){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}