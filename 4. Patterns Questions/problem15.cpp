// Problem : WAP to print given pattern :- 
    //   A
    //   B C
    //   C D E
    //   D E F G
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
        char ch='A'+i+j-2;
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}