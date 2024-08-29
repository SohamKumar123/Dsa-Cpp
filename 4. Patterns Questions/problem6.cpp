// Problem : WAP to print given pattern :- 
    //   1
    //   2 3
    //   4 5 6
    //   7 8 9 10
#include <iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter no.of rows :";
    cin>>r;
    int count=1;
    int i=1;
    while(i<=r){
        int j=1;
        while(j<=i){
            cout<<count<<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}