// Problem : WAP to print given pattern :- 
    //   D
    //   C D
    //   B C D
    //   A B C D
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
            char ch='D'-i+j;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}