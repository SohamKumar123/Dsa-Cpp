// basic operations of dequeue using STL

#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> d;  // Create a deque object d
    d.push_front(20);
    d.push_back(30);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    // d.pop_front();
    // cout<<d.front()<<endl;
    d.pop_back();
    cout<<d.back()<<endl;
    
    if(d.empty()){
        cout<<"It is empty"<<endl;
    }
    else{
        cout<<"It is not empty"<<endl;
    }

    return 0;

}