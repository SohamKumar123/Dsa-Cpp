// Problem : WAP to print given pattern :- 
    //       1  
    //     1 2 1
    //   1 2 3 2 1      
    // 1 2 3 4 3 2 1

#include <iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter the value of r:";
    cin>>r;
    int i=1;
    while(i<=r){
        //Print first triangle
        int space=r-i;
        while(space){
            cout<<" "<<" ";
            space--;
        }
        //Print 2nd Triangle
        int j=1;
        while(j<=i){
            cout<<j<<" ";
            j++;
        }
        //Print 3rd Triangle
        int start=i-1;
        while(start){
            cout<<start<<" ";
            start--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}