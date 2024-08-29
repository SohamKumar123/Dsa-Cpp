// Problem : WAP to print given pattern :- 
    // A A A 
    // B B B
    // C C C 
#include <iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter no.of rows :"<<" ";
    cin>>r;
    cout<<"Enter no.of columns :"<<" ";
    cin>>c;
    char ch='A';
    int i=1;
    while(i<=r){
        int j=1;
        while(j<=c){
            cout<<ch<<" ";
            j++;
        }
        ch++;
        cout<<endl;
        i++;
    }
    return 0;
}