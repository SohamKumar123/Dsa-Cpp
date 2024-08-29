// Problem : WAP to print given pattern :- 
    //         *
    //       * *
    //     * * *
    //   * * * *

#include <iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter no.of rows :";
    cin>>r;
    int i=1;
    while(i<=r){
        int space =r-i;
        while(space){
            cout<<" "<<" ";
            space--;
        }
        int j=1;
        while(j<=i){
            cout<<"*"<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}