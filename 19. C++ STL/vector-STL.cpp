#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(2);
    v.push_back(3);
    v.push_back(2);
    v.push_back(3);

    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    cout<<"Before Pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"After Pop"<<endl;
    v.pop_back();
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}