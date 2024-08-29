// Problem : WAP to print given pattern :- 
    //   1
    //   2 2
    //   3 3 3
    //   4 4 4 4
#include <iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the no.of rows :"<<" ";
    cin>>r;
    cout<<"Enter the no.of columns :"<<" ";
    cin>>c;
    int i=1;
    while(i<=r){
        int j=1;
        while(j<=i){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;

}