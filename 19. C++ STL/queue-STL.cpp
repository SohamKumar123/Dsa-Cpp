#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue <string> q;
    q.push("Soham");
    q.push("Kumar");
    q.push("Gupta");
    cout<<"Before pop its size is "<<q.size()<<endl;
    cout<<"First element of the queue is :"<<q.front()<<endl;
    q.pop();
    cout<<"First element of the queue is :"<<q.front()<<endl;
    cout<<"After pop its size is "<<q.size()<<endl;
    cout<<endl;
    return 0;
}
