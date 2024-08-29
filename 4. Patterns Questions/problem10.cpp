// Problem : WAP to print given pattern :- 
    // A B C 
    // A B C
    // A B C 
#include <iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter no.of rows :";
    cin>>r;
    cout<<"Enter no.of columns :";
    cin>>c;
    int i=1;
    while(i<=r){
        char ch='A';
        int j=1;
        while(j<=c){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}