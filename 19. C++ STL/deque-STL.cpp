#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque <int> d;
    d.push_back(2);
    d.push_front(4);
    d.push_front(6);
    cout<<"Before Pop"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    // d.pop_front();
    // cout<<"After Pop"<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    cout<<"Is empty"<<d.empty()<<" " <<endl;
    d.erase(d.begin(),d.end()-1);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<d.size()<<endl;
}