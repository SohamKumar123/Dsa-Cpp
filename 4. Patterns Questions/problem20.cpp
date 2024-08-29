// Problem : WAP to print given pattern :- 
    //   1 2 3 4
    //     2 3 4 
    //       3 4 
    //         4
#include <iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter the value of r:";
    cin>>r;
    int i=1;
    while(i<=r){
        int space=i-1;
        while(space){
            cout<<" "<<" ";
            space--;
        }
        int j=r-i+1;
        while(j){
            int c=i;
            cout<<c<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
    
} 
