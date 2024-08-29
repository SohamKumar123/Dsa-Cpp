// Problem : WAP to print given pattern :- 
    //   A
    //   B B
    //   C C C
#include <iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter no.of rows :";
    cin>>r;
    char ch='A';
    int i=1;
    while(i<=r){
        int j=1;
        while(j<=i){
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        ch++;
        i++;
    }
    return 0;
}