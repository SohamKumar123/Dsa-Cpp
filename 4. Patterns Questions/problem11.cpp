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
    char count='A';
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