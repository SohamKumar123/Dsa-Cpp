// Problem : WAP to print given pattern :- 
    // A B C 
    // B C D
    // C D E 
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
        int j=1;
        while(j<=c){
            char ch='A'+i+j-2;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}