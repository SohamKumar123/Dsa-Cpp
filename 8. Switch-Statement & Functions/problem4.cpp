// Write a function to tell about given number is odd or even
#include <iostream>
using namespace std;

void check(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    if(n%2==0){
        cout<<n<<" "<<"is an even number"<<endl;
    }
    else{
        cout<<n<<" "<<"is an odd number"<<endl;
    }
}

int main(){
    check();
    check();
    check();
    return 0;
}