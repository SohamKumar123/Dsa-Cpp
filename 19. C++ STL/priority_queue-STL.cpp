#include <iostream>
#include <queue>
using namespace std;
int main(){
    // using max-heap
    priority_queue <int> maxi;
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    maxi.push(5);
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    cout<<"Is empty :"<<" "<<maxi.empty()<<endl;

    // using min-heap
    priority_queue <int,vector<int>,greater<int>> mini;
    mini.push(2);
    mini.push(3);
    mini.push(4);
    mini.push(5);
    int j=mini.size();
    for(int i=0;i<n;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    cout<<"Is empty :"<<" "<<mini.empty()<<endl;
}