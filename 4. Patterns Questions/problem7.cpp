// Problem : WAP to print given pattern :- 
    //   1
    //   2 3
    //   3 4 5
    //   4 5 6 7
#include <iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter no.of rows :";
    cin>>r;
    int i=1;
    while(i<=r){
        int value=i;
        int j=1;
        while(j<=i){
            cout<<value<<" ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }

}