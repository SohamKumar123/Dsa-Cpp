// Problem : WAP to print given pattern :- 
    //   * * * *
    //   * * * 
    //   * * 
    //   * 

#include <iostream>;
using namespace std;
int main(){
    int r;
    cout<<"Enter no.of rows :";
    cin>>r;
    int i=1;
    while(i<=r){
        int j=r-i+1;
        while(j){
            cout<<"*"<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;

}