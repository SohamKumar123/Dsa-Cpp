#include <iostream>
#include <set>
using namespace std;
int main(){
    set <int> s;
    s.insert(65);
    s.insert(20);
    s.insert(30);
    s.insert(90);
    s.insert(10);
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;


}